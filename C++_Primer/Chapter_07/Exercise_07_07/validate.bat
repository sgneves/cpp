
@echo off

Debug\Exercise_07_07.exe < Input.txt > Output.txt

fc Output.txt ..\Exercise_07_03\Output.txt
