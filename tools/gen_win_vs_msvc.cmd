echo off
cd %~dp0..
cmake -B build -G "Visual Studio 17 2022"
