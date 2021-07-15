
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_03_02.exe < Text.txt

cd %folder%
