set LIBDIR=C:\GraphicsMagick.NET.libs
if exist %LIBDIR% goto done

echo Downloading .lib files
appveyor DownloadFile https://www.dropbox.com/sh/a8krszzmo76fqkt/AAAc9Jho29Jk3iLrKhsBmw-Ma?dl=1
echo Extracting .lib files
7z x -o%LIBDIR% AAAc9Jho29Jk3iLrKhsBmw-Ma

:done
