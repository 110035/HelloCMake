#/bin/sh

rm -rf bin
mkdir bin

mkdir build
cd build

cmake -G "MSYS Makefiles" ..
make
make install
