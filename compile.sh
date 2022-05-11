#!/bin/bash
VERSION="1.0"
if [ -e build ]; then
    rm -rf ./build
    mkdir build
    echo "Обнаружен старый билд!"
    echo "Мы удалим его, и скомплируем новый билд"
else
    # continue
fi
x86_64-w64-mingw32-g++ -o ./build/calc-win64-${VERSION}.exe
i686-w64-mingw32-g++ -o ./build/calc-win32-${VERSION}.exe ./src/calc.cpp
g++ -o ./build/calc-unix-${VERSION} ./src/calc.cpp
echo "Скомплировал (или нет)"
