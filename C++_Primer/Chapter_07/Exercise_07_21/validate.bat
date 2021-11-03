
@echo off

echo 0-201-82470-1 3 15 | Debug\Exercise_07_21.exe > Output.txt

fc Output.txt ..\Exercise_07_11\Output.txt
