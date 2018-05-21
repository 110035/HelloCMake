@echo off

rmdir /S /Q bin
mkdir bin

mkdir build
cd build

cmake -G "Visual Studio 15 2017" ..
make
make install
