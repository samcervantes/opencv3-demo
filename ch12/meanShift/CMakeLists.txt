cmake_minimum_required(VERSION 2.8)
project( meanShift )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( meanShift meanShift.cpp )
target_link_libraries( meanShift ${OpenCV_LIBS} )
