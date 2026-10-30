Geometry Wars: Galaxies (Wii) - native Windows build (static recompilation)  @VERSION@
https://github.com/darkuni/geometry-wars-wii-recomp

No game data is included. You need your own Geometry Wars: Galaxies disc image (Wii, NTSC-U, RGLE7D)
as .iso or .ciso.

Setup
  Put your disc image (.iso or .ciso) in this folder and run geowars.exe. On the first start it builds the "game"
  folder from it (up to a minute); after that the disc image isn't needed any more.

Requirements: 64-bit Windows 10/11, a GPU with OpenGL 3.3.

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu (resolution, widescreen, vsync, MSAA,
                                         texture filtering, controls, game speed)
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Controls (settings menu, or "controls =" in geowars.ini)
  classic (default): Classic Controller = twin-stick on a PC gamepad
      Gamepad: left stick = move, right stick = fire, buttons by label (A/B/X/Y),
               LB/RB = L/R, LT/RT = ZL/ZR (bombs as the game assigns them)
      Keyboard: arrows = move, I/J/K/L = fire, X = A, Z = B, S = X, A = Y, Q/W = L/R, 1/2 = ZL/ZR
  nunchuk: Wii Remote + Nunchuk (no pointer, so aiming is limited)
  All: Start/Enter = +, Back/Backspace = -, Guide/H = HOME

Files
  geowars.ini        settings (created on first run)
  geowars.log        log of the last run - include it with bug reports
  geowars_hang.txt   written if no frame is shown for 8 seconds - include it too
  nand\             saves

Not supported: online leaderboards, DS download play, Wii Remote pointer aiming.

Unofficial fan project, not affiliated with Activision, Bizarre Creations, Kuju Entertainment, Sierra
or Nintendo. The exe contains code machine-translated from the game's executable; game data comes
from your own disc image.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
