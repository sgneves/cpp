
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_01_21.exe < Book_sales.txt

cd %folder%
