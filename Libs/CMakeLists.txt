cmake_minimum_required(VERSION 2.8)

project (gem)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB gem_SRC
   gem/*.cpp
   gem/*.hpp
   gem/detail/*.hpp
   gem/detail/*.cpp
   gem/detail/*.inl
   gem/*.h
   gem/*.inl
   pugixml/*.cpp
   pugixml/*.hpp
   )

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/detail)
add_library(gem SHARED ${gem_SRC})
set(BOOST_ROOT /xflibs/cpp/boost/1.60/include)

INCLUDE(FindPkgConfig)

PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)

INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS} ${BOOST_ROOT})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES})
