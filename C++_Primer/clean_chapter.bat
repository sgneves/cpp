
@echo off

cd %1

for /f %%i in ('dir /b/ad Exercise_*') do (
	cd %%i^
	& call vscp %%i^
	& cd..
)

cd..
