@echo off
rem Builds the "game" folder from your own Geometry Wars: Galaxies disc image (.iso or .ciso, NTSC-U).
rem Drag the image onto this file, or put it in this folder and double-click.
rem Needs Python 3.11+ (python.org - tick "Add python.exe to PATH").
cd /d "%~dp0"
set IMG=%~1
if "%IMG%"=="" for %%f in (*.ciso *.iso) do set IMG=%%f
if "%IMG%"=="" (echo No .iso/.ciso found. Put your disc image next to this file, or drag it onto it. & pause & exit /b 1)
where python >nul 2>nul || (echo Python 3.11+ is required: https://www.python.org/downloads/ & pause & exit /b 1)
python -m pip install --quiet --disable-pip-version-check libWiiPy pycryptodome
python tools\prepare_disc.py "%IMG%" game
if errorlevel 1 (echo Failed - see the messages above. & pause & exit /b 1)
echo.
echo Done. Run geowars.exe to play.
pause
