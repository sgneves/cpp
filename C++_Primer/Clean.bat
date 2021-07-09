
@echo off

set folder=%~n1

rmdir /S/Q .\%folder%\.vs 2> NUL
rmdir /S/Q .\%folder%\Debug 2> NUL
rmdir /S/Q .\%folder%\x64 2> NUL
