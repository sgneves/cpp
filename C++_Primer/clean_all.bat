
@echo off

cd %1

(for /f %%i in ('dir /b/ad Exercise_*') do call ..\clean %%i)

cd..
