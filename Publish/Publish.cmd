@echo off
call "%vs110comntools%vsvars32.bat"
powershell -ExecutionPolicy Unrestricted ..\Tools\Scripts\Publish.ps1 "1.3.25.0"
pause
