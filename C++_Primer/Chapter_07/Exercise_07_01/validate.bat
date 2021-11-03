
@echo off

Debug\Exercise_07_01.exe < Input.txt > Output.txt

fc Output.txt Output_Bkp.txt
