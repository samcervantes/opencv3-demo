*** Installation *** 

1. To install OpenCV on mac, use these instructions: 
  https://www.pyimagesearch.com/2017/05/15/resolving-macos-opencv-homebrew-install-errors/
2. Install CMAKE: brew install cmake


*** Create a compile a program using the build script ***
1. Create your project_name.cpp file
2. ./build project_name


*** Compile and run a program without the build script *** 

1. Create your program.cpp file
2. Create  CMakeLists.txt file in the same directory with the following text:

cmake_minimum_required(VERSION 2.8)
project( DisplayImage3 )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( DisplayImage3 DisplayImage3.cpp )
target_link_libraries( DisplayImage3 ${OpenCV_LIBS} )

3. cmake .
4. make
