
@echo off

if not exist %1 (
	echo ERROR: Invalid directory.^
	& exit /b
)

set folder=%cd%

cd %1

if exist .vs (for /f %%i in ('dir /b/s/a-d .vs ^| findstr /vile ".suo"') do del /q "%%i")

for %%i in (Debug Release x64\Debug x64\Release) do (
	for /f %%j in ('dir /b/s/ad %%i') do rmdir /s/q "%%j"
	for /f %%j in ('dir /b/s %%i ^| findstr /vile ".exe"') do del /q "%%j"
) 2> NUL

cd %folder%
