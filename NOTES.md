# Geometry Wars: Galaxies (RGLE7D, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as Gradius/Contra/Castlevania ReBirth and Chocobo's Dungeon. First disc game
since Chocobo, so the runtime gained a disc mode next to the WiiWare title mode.

## Source
- Disc image: `gwgalaxieswii.ciso` (CISO, 2 MiB blocks). Game ID RGLE7D, one game partition at 0xF800000,
  title 00010000-52474C45, IOS21.
- `tools/prepare_disc.py <image.iso|.ciso> game` decrypts the partition and writes
  `game/sys/` (main.dol, boot.bin, bi2.bin, fst.bin, tmd.bin, ticket.bin) and `game/files/`.
- main.dol sha1 a09042346f63a1569fe51b5a6da8b65e2c4f31db, entry 0x8000403C, .text 0x8000BA00-0x801EA35C.
- RVL SDK builds: OS/DVD Apr 24 2007 (same OS build as Chocobo's Dungeon), GX/VI/AI Nov 30 2006, AX Dec 18 2006,
  WPAD/KPAD May 17 2007. Also links MP/MPDL (DS download play, `files/US/main.srl`), DWC, SO, NCD, NWC24, HBM.

## Naming
- dtk: 6,387 functions. xmatch vs Chocobo (2,912 matched) then Gradius (1,771) -> 2,727 renamed.
- Manual names in `tools/manual_names.txt` (applied by `tools/apply_manual.py`): AIStopDMA, AIGetDMABytesLeft,
  SCGetAspectRatio, SCGetLanguage, GX breakpoint/FIFO functions, and the game's frame-pipeline functions.

## game.h constants
- __AXDSPResumeCallback 0x800B342C, DecrementerExceptionCallback 0x8009945C, iosFree 0x800E0554,
  OSExitThread 0x800A1294, SelectThread idle loop branch 0x800A0F3C, interrupt table r13-0x5FA0,
  IOS heap r13-0x75BC.

## What was new for this game
- **GX breakpoints.** The game pipelines frames: at the end of each frame (GW_EndFrame 0x80016710) it reads the
  CPU FIFO write pointer and arms a GX breakpoint there; the breakpoint callback (0x80015EB0) pops a 5-entry
  queue, wakes the present thread, and moves or clears the breakpoint. The VI pre-retrace callback swaps XFBs
  only when the draw-sync token is exactly last+1, so the GP must really stop at the breakpoint.
  `gx_fifo.cpp` now tracks the PI FIFO write pointer (CC003014, Wii wrap bit 0x20000000), tags each 32-byte burst with
  its address, and the GP stops when its read pointer equals the breakpoint address (CP control bits 0 and 1),
  raising the CP interrupt (PI 17) when bit 5 is set.
- **Display lists built through the write pipe.** GXBeginDisplayList turns the GP link off (CP control bit 4)
  and points the PI FIFO at the list buffer. Bursts now always land in memory at their FIFO address, and are
  only executed when the link is on.
- **Raw WPAD reads.** The game reads the Classic Controller and Nunchuk with WPADRead (not KPAD).
  `hle_WPADRead` fills WPADCLStatus/WPADFSStatus; WPADInit is skipped, so WPADSet/GetDataFormat are kept on the host.
  Default controls = classic (twin-stick on a gamepad).

## Testing notes
- Headless (llvmpipe) runs at ~8 fps: the glow effect does ~21 EFB copies per frame. Use RESOLUTION_SCALE=1 and
  long AUTOPRESS windows (A@200-240,...) because the game samples input once per rendered frame.
- Debug env: CPLOG=1 (CP control/breakpoint/token log), TRACEFN=addr,... (log every call of named functions).

## Windows: window thread and GL context
- With GX breakpoints, GP work (and so GL calls and frame presentation) runs on whichever guest thread takes the
  interrupt that releases the breakpoint, not only on the thread that created the window. On Windows the GL context
  was current only on the creating thread and window messages were only pumped from there, so the screen froze on a
  dark frame and the window went "Not Responding" while the game kept running underneath.
- Fix: the SDL window, both GL contexts and the event pump live on a dedicated UI thread; the renderer context is
  released on every guest thread switch (`switch_to` -> `gl_platform_release`) and made current by the thread
  doing GX work (`gl_platform_make_current` in `ensure_gl`/`gx_flush`).
- First boot takes ~35 s at 60 fps before the save check; closing earlier looked like a hang.
- Diagnostics: `geowars.log` next to the exe (falls back to %TEMP%), `[status]` line every 10 s, thread/FIFO dump
  every 30 s, `geowars_hang.txt` after 8 s without a new frame.
