project(hello)

cmake_minimum_required(VERSION 2.6)

set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/bin)

#################################################################

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_EXE_LINKER_FLAGS -static)
#add_definitions(-Wall -O2)

message("CMAKE_INSTALL_PREFIX:     " ${CMAKE_INSTALL_PREFIX}) 
message("CMAKE_CURRENT_SOURCE_DIR: " ${CMAKE_CURRENT_SOURCE_DIR}) 
message("CMAKE_CURRENT_BINARY_DIR: " ${CMAKE_CURRENT_BINARY_DIR}) 
message("CMAKE_EXE_LINKER_FLAGS:   " ${CMAKE_EXE_LINKER_FLAGS}) 

#################################################################

file(GLOB_RECURSE HEADERS "src/*.h")
file(GLOB_RECURSE SOURCES "src/*.cpp")

message("HEADERS:   " ${HEADERS}) 
message("SOURCES:   " ${SOURCES}) 

#################################################################

include_directories(libs/foo)
add_subdirectory(libs/foo)

#################################################################

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} foo)

install(TARGETS ${PROJECT_NAME} DESTINATION .)
