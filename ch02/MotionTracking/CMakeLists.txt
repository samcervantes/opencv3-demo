cmake_minimum_required(VERSION 2.8)
project( MotionTracking )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( MotionTracking MotionTracking.cpp )
target_link_libraries( MotionTracking ${OpenCV_LIBS} )
