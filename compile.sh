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
if [ $OS == "Windows_NT" ]; then
    echo "У вас обнаружен Windows. Мы не можем скомплировать программу на вашей ОС!"
    exit 1
else
    echo "Будут установлены комплияторы. Хотите?"
    read -p "y/n: " WANT_COMPILERS;
    case $WANT_COMPILERS in
        y|yes|yea|yeah|д|да|Y|Yes|YEs|YES|yES|yeS|Yea|YEa|YEa|yEa|yea|Д|Да|дА|yeaH|yeAH|yEAH|YEAH|YEAh|YEah|Yeah|ok|oK|OK|Ok|ок|Ок|ОК|оК|йес|й|Йес|ЙЕс|ЙЕС|Й|йЕС|йеС|йеа|йеА|йЕА|ЙЕА|ЙЕа|Йеа)
            sudo apt install gcc gcc-mingw-w64-x86-64 gcc-mingw-w64-i686
            ;;
        n|no|not|N|No|NO|nO|н|нет|Н|Нет|НЕт|НЕТ|нЕТ|неТ|неа|неА|нЕА|НЕА|Неа|НЕа|ноу|ноУ|нОУ|НОУ|НОу|Ноу)
            
            ;;
    esac
x86_64-w64-mingw32-g++ -o ./build/calc-win64-${VERSION}.exe
i686-w64-mingw32-g++ -o ./build/calc-win32-${VERSION}.exe ./src/calc.cpp
g++ -o ./build/calc-unix-${VERSION} ./src/calc.cpp
echo "Скомплировал (или нет)"
