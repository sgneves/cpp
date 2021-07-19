
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_03_20b.exe < Input.txt

cd %folder%
