cmake_minimum_required(VERSION 3.6)
project(CppReference)

set(CMAKE_CXX_STANDARD 20)

#set(SOURCE_FILES StandardLibraryHeaders/UtilitiesLibrary/variant/variant/variant.cpp)
#add_executable(CppReference ${SOURCE_FILES})
add_subdirectory(AlgorithmsLibrary)
add_subdirectory(ThreadSupportLibrary)
#SET(CMAKE_CXX_FLAGS -pthread)



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -lpthread")
