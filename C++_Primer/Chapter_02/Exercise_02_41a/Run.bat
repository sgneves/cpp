
@echo off

set folder=%cd%

cd %~dp0

.\Debug\Exercise_02_41a.exe < Book_sales.txt

cd %folder%
