#!/bin/bash
x86_64-w64-mingw32-g++ -o calc-win64.exe
i686-w64-mingw32-g++ -o calc-win32.exe ./src/calc.cpp
g++ -o calc-unix ./src/calc.cpp
echo "Скомплировал (или нет)"
