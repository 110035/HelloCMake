cmake_minimum_required(VERSION 2.8)

# Ќазвание проекта, библиотеки
project(foo)

# ”становка переменной со списком исходников
set(SOURCE_LIB foo.cpp)

# —оздание статической библиотеки
add_library(foo STATIC ${SOURCE_LIB})
