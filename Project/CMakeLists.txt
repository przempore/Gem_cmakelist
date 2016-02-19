#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
file(GLOB SOURCE_FILES include/*.hpp
				 src/*.cpp)

INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS} ${BOOST_ROOT})

add_executable(myProgram ${SOURCE_FILES})
target_link_libraries(myProgram gem)