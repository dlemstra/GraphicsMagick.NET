@echo off
call "%vs120comntools%vsvars32.bat"

for /r ..\..\GraphicsMagick.NET.Tests\bin %%a in (*.dll) do (
  if "%%~nxa"=="GraphicsMagick.NET.Tests.dll" (
    echo "Running tests from: %%~dpnxa"
    vstest.console /logger:Appveyor %%~dpnxa
  )
)