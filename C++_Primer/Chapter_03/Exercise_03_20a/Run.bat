
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_03_20a.exe < Input.txt

cd %folder%
