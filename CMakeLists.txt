cmake_minimum_required(VERSION 3.6)
project(CppReference)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES StandardLibraryHeaders/UtilitiesLibrary/variant/variant/variant.cpp)
add_executable(CppReference ${SOURCE_FILES})