# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.9.3_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.9.3_1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3

# Include any dependencies generated for this target.
include CMakeFiles/DisplayImage3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DisplayImage3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DisplayImage3.dir/flags.make

CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o: CMakeFiles/DisplayImage3.dir/flags.make
CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o: DisplayImage3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o -c /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3/DisplayImage3.cpp

CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3/DisplayImage3.cpp > CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.i

CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3/DisplayImage3.cpp -o CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.s

CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o.requires:

.PHONY : CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o.requires

CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o.provides: CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o.requires
	$(MAKE) -f CMakeFiles/DisplayImage3.dir/build.make CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o.provides.build
.PHONY : CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o.provides

CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o.provides.build: CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o


# Object files for target DisplayImage3
DisplayImage3_OBJECTS = \
"CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o"

# External object files for target DisplayImage3
DisplayImage3_EXTERNAL_OBJECTS =

DisplayImage3: CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o
DisplayImage3: CMakeFiles/DisplayImage3.dir/build.make
DisplayImage3: /usr/local/lib/libopencv_stitching.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_superres.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_videostab.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_aruco.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_bgsegm.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_bioinspired.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_ccalib.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_dpm.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_face.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_fuzzy.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_img_hash.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_line_descriptor.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_optflow.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_reg.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_rgbd.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_saliency.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_stereo.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_structured_light.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_surface_matching.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_tracking.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_xfeatures2d.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_ximgproc.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_xobjdetect.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_xphoto.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_shape.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_photo.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_calib3d.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_phase_unwrapping.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_dnn.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_video.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_datasets.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_plot.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_text.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_features2d.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_flann.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_highgui.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_ml.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_videoio.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_imgcodecs.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_objdetect.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_imgproc.3.3.0.dylib
DisplayImage3: /usr/local/lib/libopencv_core.3.3.0.dylib
DisplayImage3: CMakeFiles/DisplayImage3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DisplayImage3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DisplayImage3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DisplayImage3.dir/build: DisplayImage3

.PHONY : CMakeFiles/DisplayImage3.dir/build

CMakeFiles/DisplayImage3.dir/requires: CMakeFiles/DisplayImage3.dir/DisplayImage3.cpp.o.requires

.PHONY : CMakeFiles/DisplayImage3.dir/requires

CMakeFiles/DisplayImage3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DisplayImage3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DisplayImage3.dir/clean

CMakeFiles/DisplayImage3.dir/depend:
	cd /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3 /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3 /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3 /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3 /Users/samcervantes/dev/opencv-demo/ch01/DisplayImage3/CMakeFiles/DisplayImage3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DisplayImage3.dir/depend

