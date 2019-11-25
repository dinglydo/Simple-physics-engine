@ECHO off

IF NOT DEFINED PLATFORM CALL vcvarsall x64
mkdir build
pushd build
cl /EHcs /I ..\include /I "..\..\Physics Engine" ..\*.cpp /link ..\lib\gtest.lib
popd