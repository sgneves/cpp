
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_02_42.exe < Book_sales.txt

cd %folder%
