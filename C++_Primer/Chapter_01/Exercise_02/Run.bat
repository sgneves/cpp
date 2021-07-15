
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_01_02.exe

echo %ERRORLEVEL%

cd %folder%
