cmake_minimum_required(VERSION 3.6)
project(CppReference)

set(CMAKE_CXX_STANDARD 20)

#set(SOURCE_FILES StandardLibraryHeaders/UtilitiesLibrary/variant/variant/variant.cpp)
#add_executable(CppReference ${SOURCE_FILES})
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Xclang -fconcepts-ts")
add_subdirectory(AlgorithmsLibrary)