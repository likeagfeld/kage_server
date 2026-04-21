@echo off
setlocal

set "ROOT=%~dp0"
for %%I in ("%ROOT%") do set "ROOT=%%~fI"
set "TOOLS_DIR=%ROOT%tools"
set "GUI_URL=http://127.0.0.1:8765/"

call :find_python || exit /b 1

powershell -NoProfile -Command ^
  "try { Invoke-WebRequest -UseBasicParsing -Uri '%GUI_URL%' -TimeoutSec 1 | Out-Null; exit 0 } catch { exit 1 }"
if %ERRORLEVEL% EQU 0 (
  start "" "%GUI_URL%"
  exit /b 0
)

if exist "%PYTHON_EXE:python.exe=pythonw.exe%" (
  set "PYTHON_LAUNCH=%PYTHON_EXE:python.exe=pythonw.exe%"
) else (
  set "PYTHON_LAUNCH=%PYTHON_EXE%"
)

start "" "%PYTHON_LAUNCH%" "%TOOLS_DIR%\gui_server.py"

powershell -NoProfile -Command ^
  "$deadline = (Get-Date).AddSeconds(12);" ^
  "do {" ^
  "  try { Invoke-WebRequest -UseBasicParsing -Uri '%GUI_URL%' -TimeoutSec 1 | Out-Null; exit 0 }" ^
  "  catch { Start-Sleep -Milliseconds 250 }" ^
  "} while ((Get-Date) -lt $deadline);" ^
  "exit 1"

if %ERRORLEVEL% NEQ 0 (
  echo The dashboard did not start within the expected time.
  echo You can run "%PYTHON_EXE%" "%TOOLS_DIR%\gui_server.py" manually for details.
  exit /b 1
)

start "" "%GUI_URL%"
exit /b 0

:find_python
set "PYTHON_EXE="
for %%P in ("%LocalAppData%\Programs\Python\Python310\python.exe" "%LocalAppData%\Programs\Python\Python311\python.exe" "%LocalAppData%\Programs\Python\Python312\python.exe") do (
  if exist "%%~fP" (
    set "PYTHON_EXE=%%~fP"
    goto :python_found
  )
)

for %%C in (py.exe python.exe) do (
  where %%C >nul 2>nul
  if not errorlevel 1 (
    for /f "delims=" %%I in ('where %%C') do (
      set "PYTHON_EXE=%%~fI"
      goto :python_found
    )
  )
)

echo Python 3 was not found. Install Python and try again.
exit /b 1

:python_found
exit /b 0
