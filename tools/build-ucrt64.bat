@echo off
setlocal

set "ROOT=%~dp0.."
for %%I in ("%ROOT%") do set "ROOT=%%~fI"
set "MSYS2_ROOT=C:\msys64"
set "SHELL=%MSYS2_ROOT%\msys2_shell.cmd"

if not exist "%SHELL%" (
  echo MSYS2 was not found at "%SHELL%".
  exit /b 1
)

call "%SHELL%" -defterm -no-start -ucrt64 -use-full-path -where "%ROOT%" -c "bash ./tools/build-ucrt64.sh"
exit /b %ERRORLEVEL%
