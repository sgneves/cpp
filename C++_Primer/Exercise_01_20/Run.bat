
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_01_20.exe < Book_sales.txt

cd %folder%
