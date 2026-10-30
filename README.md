# Geometry Wars: Galaxies (Wii, NTSC-U) - native recompilation

A static recompilation of **Geometry Wars: Galaxies** for Wii (disc, NTSC-U, `RGLE7D`) to native code. The game's
PowerPC executable is translated to C++ and runs on Windows (and Linux) with a small runtime that replaces
the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso` or `.ciso`).

## Download

Get the latest `GeometryWarsGalaxies-<version>-win64.zip` from
[Releases](https://github.com/darkuni/geometry-wars-wii-recomp/releases), unzip it, put your disc image (.iso or .ciso) in the same folder and run `geowars.exe`: the first start builds the
`game` folder from it. Nothing else to install.
The zip's `README.txt` has the controls and keys. To build it yourself, see [Building](#building).

## Status

- Plays through the strap screen, licence/ESRB/publisher screens, title, profile creation, galaxy map,
  drone select, levels and results (Linux headless tests and Windows play-testing).
- First start takes about 35 s to get through the intro screens before the save is created.
- `geowars.log` is written next to the exe; a freeze report (`geowars_hang.txt`) if no frame is shown for 8 s.
- v0.4 (Oct 30, 2026): no Python or setup tool needed - on the first start the game builds its `game` folder
  from your disc image placed next to the exe (decryption and unpacking are built in).
- v0.3 (Oct 30, 2026): faster vertex handling (index buffers, cached vertex setup); audio sent to the sound
  card straight from the mixer (no clicks at 3 ms frame boundaries). The GX FIFO stays on the game thread
  (the game's frame pipeline relies on GX breakpoints the CPU must see immediately).
- Not supported: online leaderboards (DWC/SO), DS download play (MP/MPDL), Wii Remote pointer aiming.

Shares its recompiler and runtime with the ReBirth ports and Chocobo's Dungeon; per-game addresses are in
`src/runtime/game.h` and the idle loop in `src/recomp.py`. See [NOTES.md](NOTES.md) for the technical write-up.

## Controls

Default is the Classic Controller layout (`controls = classic` in `geowars.ini`), which is a twin-stick
setup on a PC gamepad: left stick moves, right stick fires, LT/RT (ZL/ZR) or L/R for bombs as the game
assigns them, Start = +, Back = -, Guide = HOME.
Keyboard: arrows move, I/J/K/L fire, X = A, Z = B, A = X, S = Y, Q/W = L/R, 1/2 = ZL/ZR, Enter = +.
`controls = nunchuk` gives the Wii Remote + Nunchuk layout (no pointer, so aiming is limited).

F1 / Esc (or Start+Back) opens the settings menu, F11 / Alt+Enter toggles fullscreen, hold Tab (or click
the right stick) to fast-forward. Saves go in a `nand` folder next to `game`.

## Layout

| Path | What it is |
| --- | --- |
| `tools/prepare_disc.py` | Decrypts a Wii disc image (.iso/.ciso) into the `game` folder |
| `src/recomp.py` | Recompiler: `main.dol` + symbols -> `src/gen/*.cpp` |
| `src/runtime/` | Runtime: CPU context and memory, threads, IOS, DVD, GX -> OpenGL 3.3, AX audio, input |
| `src/runtime/game.h` | Game-specific addresses the runtime needs |
| `src/hle.txt` | Guest functions replaced by host code or stubbed |
| `config/` | Symbols and decomp-toolkit (dtk) project files |

## Building

The generated C++ is in `src/gen` (made with step 2 from the NTSC-U executable), so step 2 is only needed to
regenerate it. GitHub Actions builds every push (see `.github/workflows/build-windows.yml`); version tags
publish a release. Everything below is tested on Ubuntu 24.04; on Windows 10/11 use WSL
(`wsl --install -d Ubuntu-24.04` in an administrator PowerShell, then open "Ubuntu"). The build cross-compiles
a Windows exe.

**1. Tools** (once)

```sh
sudo apt update
sudo apt install -y git wget python3 python3-pip cmake ninja-build mingw-w64 g++-mingw-w64-x86-64-posix
pip install --break-system-packages libWiiPy pycryptodome
wget https://github.com/libsdl-org/SDL/releases/download/release-2.30.9/SDL2-devel-2.30.9-mingw.tar.gz
tar xf SDL2-devel-2.30.9-mingw.tar.gz          # -> ~/SDL2-2.30.9
```

**2. Extract your disc image (and optionally regenerate the C++)**

```sh
git clone https://github.com/darkuni/geometry-wars-wii-recomp.git
cd geometry-wars-wii-recomp
python3 tools/prepare_disc.py /mnt/c/path/to/gwgalaxieswii.ciso game     # your own image (Windows drives are under /mnt/c)
cd src
python3 recomp.py ../game/sys/main.dol symbols.txt gen 300               # optional: regenerates src/gen
```

**3. Build the Windows exe**

```sh
cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake -DSDL2_DIR=$HOME/SDL2-2.30.9/x86_64-w64-mingw32
ninja -C build-win -j1        # the generated code is large: -j1 keeps memory use down (raise it if you have RAM to spare)
```

**4. Put the game folder together** (example: `C:\Games\geowars`)

```sh
D=/mnt/c/Games/geowars; mkdir -p $D
cp build-win/geowars.exe $HOME/SDL2-2.30.9/x86_64-w64-mingw32/bin/SDL2.dll \
   /usr/x86_64-w64-mingw32/lib/libwinpthread-1.dll runtime/ipl-font-licenses.txt $D/
cp -r ../game $D/
```

Linux test build (headless, EGL; writes screenshots): `cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build`,
then `SHOT_EVERY=100 SHOT_DIR=shots TIMEOUT=120 ./build/geowars ../game`.

## Disclaimer

This is an unofficial fan project. It is **not affiliated with, endorsed by, or sponsored by** Activision,
Bizarre Creations, Kuju Entertainment, Sierra or Nintendo. *Geometry Wars* and all related names and marks
belong to their respective owners. This repository and its releases contain no game data (graphics, sound,
levels): those come from your own legally obtained disc image. `src/gen` and the release exe contain code
machine-translated from the game's executable.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components
(fonts, OpenGL headers) keep their own licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
