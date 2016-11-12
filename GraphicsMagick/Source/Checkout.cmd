@echo off

set REPOS=https://github.com/dlemstra/GraphicsMagick-Windows.git
set DATE=2016-11-12 12:00

set BASH="%PROGRAMFILES%\Git\bin\bash.exe"
if exist %BASH% goto EXECUTE

set bash="%PROGRAMFILES(x86)%\Git\bin\bash.exe"
if exist %BASH% goto EXECUTE

echo Failed to find bash.exe
echo %BASH%
exit /b 1

:EXECUTE
%BASH% --login -i -c "./Checkout.sh %REPOS% \"%DATE%\""

pause
