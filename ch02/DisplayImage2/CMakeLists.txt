cmake_minimum_required(VERSION 2.8)
project( DisplayImage2 )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( DisplayImage2 DisplayImage2.cpp )
target_link_libraries( DisplayImage2 ${OpenCV_LIBS} )