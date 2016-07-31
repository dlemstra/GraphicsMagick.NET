@echo off
call "%vs110comntools%vsvars32.bat"
powershell -ExecutionPolicy Unrestricted ..\Tools\Scripts\Publish.ps1 "1.3.24.0"
pause
