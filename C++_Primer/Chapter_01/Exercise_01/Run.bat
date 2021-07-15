
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_01_01.exe

echo %ERRORLEVEL%

cd %folder%
