@echo off

set DROPBOX=%USERPROFILE%\Dropbox\GraphicsMagick.NET.libs
if exist %DROPBOX% goto copy

echo You can download the library files here: https://www.dropbox.com/sh/a8krszzmo76fqkt/AAAc9Jho29Jk3iLrKhsBmw-Ma?dl=0
goto done

:copy
xcopy %DROPBOX%\lib lib /Y /S /I
xcopy %DROPBOX%\Q8\lib Q8\lib /Y /S /I
xcopy %DROPBOX%\Q16\lib Q16\lib /Y /S /I

:done
pause
