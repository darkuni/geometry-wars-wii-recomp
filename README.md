# Geometry Wars: Galaxies (Wii, NTSC-U) - native recompilation

A static recompilation of **Geometry Wars: Galaxies** for Wii (disc, NTSC-U, `RGLE7D`) to native code. The game's
PowerPC executable is translated to C++ and runs on Windows (and Linux) with a small runtime that replaces
the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso` or `.ciso`). The
build turns the image into a `game` folder and generates the C++ from the executable inside it.

## Status

- Plays through the strap screen, licence/ESRB/publisher screens, title, profile creation, galaxy map,
  drone select, levels and results (Linux headless tests and Windows play-testing).
- First start takes about 35 s to get through the intro screens before the save is created.
- `geowars.log` is written next to the exe; a freeze report (`geowars_hang.txt`) if no frame is shown for 8 s.
- Not supported: online leaderboards (DWC/SO), DS download play (MP/MPDL), Wii Remote pointer aiming.

Shares its recompiler and runtime with the ReBirth ports and Chocobo's Dungeon; per-game addresses are in
`src/runtime/game.h` and the idle loop in `src/recomp.py`. See [NOTES.md](NOTES.md) for the technical write-up.

## Controls

Default is the Classic Controller layout (`controls = classic` in `geowars.ini`), which is a twin-stick
setup on a PC gamepad: left stick moves, right stick fires, LT/RT (ZL/ZR) or L/R for bombs as the game
assigns them, Start = +, Back = -, Guide = HOME.
Keyboard: arrows move, I/J/K/L fire, X = A, Z = B, A = X, S = Y, Q/W = L/R, 1/2 = ZL/ZR, Enter = +.
`controls = nunchuk` gives the Wii Remote + Nunchuk layout (no pointer, so aiming is limited).

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

Requirements: Python 3.11+, `pip install libWiiPy pycryptodome`, CMake, Ninja, a C++17 compiler; Windows builds
are cross-compiled with mingw-w64 (posix threads) and the SDL2 mingw development package.

```sh
python3 tools/prepare_disc.py <your>.ciso game
cd src
python3 recomp.py ../game/sys/main.dol symbols.txt gen 300
cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake \
      -DSDL2_DIR=/path/to/SDL2-2.30.x/x86_64-w64-mingw32
ninja -C build-win -j1
# Linux headless test build:
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build
SHOT_EVERY=100 SHOT_DIR=shots TIMEOUT=120 ./build/geowars ../game
```

Ship `geowars.exe` with `SDL2.dll`, `libwinpthread-1.dll` and `src/runtime/ipl-font-licenses.txt` next to
a `game` folder.

## Disclaimer

This is an unofficial fan project. It is **not affiliated with, endorsed by, or sponsored by** Activision,
Bizarre Creations, Kuju Entertainment, Sierra or Nintendo. *Geometry Wars* and all related names and marks
belong to their respective owners. This repository contains no game code or game data; you need your own
legally obtained copy of the game.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components
(fonts, OpenGL headers) keep their own licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
