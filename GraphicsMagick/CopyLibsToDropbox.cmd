@echo off

set DROPBOX=%USERPROFILE%\Dropbox\GraphicsMagick.NET.libs
if exist %DROPBOX% goto copy

echo Unable to find Dropbox folder
goto done

:copy

echo Are you sure?
pause

xcopy lib %DROPBOX%\lib /Y /S /I
xcopy Q8\lib %DROPBOX%\Q8\lib /Y /S /I
xcopy Q16\lib %DROPBOX%\Q16\lib /Y /S /I

:done
pause
