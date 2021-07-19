
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_03_17.exe < Text.txt

cd %folder%
