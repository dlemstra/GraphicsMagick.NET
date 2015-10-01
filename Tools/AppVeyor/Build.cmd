@echo off
call "%vs140comntools%vsvars32.bat"

set LIBDIR=C:\GraphicsMagick.NET.libs
set TARGET=C:\GraphicsMagick.NET\GraphicsMagick
xcopy %LIBDIR%\lib %TARGET%\lib /Y /S /I
xcopy %LIBDIR%\Q8\lib %TARGET%\Q8\lib /Y /S /I
xcopy %LIBDIR%\Q16\lib %TARGET%\Q16\lib /Y /S /I

powershell -ExecutionPolicy Unrestricted ..\Scripts\AppVeyor\Build.ps1 %1 %2