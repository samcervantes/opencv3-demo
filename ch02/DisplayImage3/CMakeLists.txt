cmake_minimum_required(VERSION 2.8)
project( DisplayImage3 )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( DisplayImage3 DisplayImage3.cpp )
target_link_libraries( DisplayImage3 ${OpenCV_LIBS} )