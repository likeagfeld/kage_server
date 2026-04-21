@echo off
setlocal

echo Adding Windows Firewall rules for Kage server ports...
netsh advfirewall firewall add rule name="Kage Server UDP 9090-9093" dir=in action=allow protocol=UDP localport=9090-9093
netsh advfirewall firewall add rule name="Kage Server TCP 10100" dir=in action=allow protocol=TCP localport=10100
netsh advfirewall firewall add rule name="Kage Server TCP 20200" dir=in action=allow protocol=TCP localport=20200

echo.
echo If a rule already existed, Windows may report it separately.
pause
