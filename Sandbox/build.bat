@echo off

rem calling vcvarsall multiple times can cause a crash
if not defined PLATFORM call vcvarsall x64
pushd build
cl /EHsc /I ..\include ..\*.cpp /link ..\lib\SDL\SDL2.lib ..\lib\SDL\SDL2main.lib /SUBSYSTEM:CONSOLE /out:sandbox.exe
popd