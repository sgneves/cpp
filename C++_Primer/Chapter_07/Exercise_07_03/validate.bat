
@echo off

Debug\Exercise_07_03.exe < Input.txt > Output.txt

fc Output.txt ..\Exercise_07_01\Output.txt
