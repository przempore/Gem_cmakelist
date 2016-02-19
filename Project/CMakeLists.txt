cmake_minimum_required(VERSION 2.8)
project(project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
file(GLOB SOURCE_FILES include/*.hpp
				 src/*.cpp)

add_executable(project ${SOURCE_FILES})