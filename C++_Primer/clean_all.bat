
@echo off

(for /f %%i in ('dir /b/ad Exercise_*') do clean %%i) > NUL
