# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/build"

# Include any dependencies generated for this target.
include CMakeFiles/prueba2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prueba2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prueba2.dir/flags.make

CMakeFiles/prueba2.dir/main.cpp.o: CMakeFiles/prueba2.dir/flags.make
CMakeFiles/prueba2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prueba2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prueba2.dir/main.cpp.o -c "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/main.cpp"

CMakeFiles/prueba2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prueba2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/main.cpp" > CMakeFiles/prueba2.dir/main.cpp.i

CMakeFiles/prueba2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prueba2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/main.cpp" -o CMakeFiles/prueba2.dir/main.cpp.s

# Object files for target prueba2
prueba2_OBJECTS = \
"CMakeFiles/prueba2.dir/main.cpp.o"

# External object files for target prueba2
prueba2_EXTERNAL_OBJECTS =

prueba2: CMakeFiles/prueba2.dir/main.cpp.o
prueba2: CMakeFiles/prueba2.dir/build.make
prueba2: CMakeFiles/prueba2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prueba2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prueba2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prueba2.dir/build: prueba2

.PHONY : CMakeFiles/prueba2.dir/build

CMakeFiles/prueba2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prueba2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prueba2.dir/clean

CMakeFiles/prueba2.dir/depend:
	cd "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020" "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020" "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/build" "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/build" "/home/dmarquez/Documents/Trabajos en clase/Prueba2/Prueba2_P4_2020/build/CMakeFiles/prueba2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/prueba2.dir/depend

