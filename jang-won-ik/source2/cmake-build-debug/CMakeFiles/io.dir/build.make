# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/io.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/io.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/io.dir/flags.make

CMakeFiles/io.dir/keyword_1/namespace.cpp.o: CMakeFiles/io.dir/flags.make
CMakeFiles/io.dir/keyword_1/namespace.cpp.o: ../keyword_1/namespace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/io.dir/keyword_1/namespace.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/io.dir/keyword_1/namespace.cpp.o -c /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/keyword_1/namespace.cpp

CMakeFiles/io.dir/keyword_1/namespace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/io.dir/keyword_1/namespace.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/keyword_1/namespace.cpp > CMakeFiles/io.dir/keyword_1/namespace.cpp.i

CMakeFiles/io.dir/keyword_1/namespace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/io.dir/keyword_1/namespace.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/keyword_1/namespace.cpp -o CMakeFiles/io.dir/keyword_1/namespace.cpp.s

# Object files for target io
io_OBJECTS = \
"CMakeFiles/io.dir/keyword_1/namespace.cpp.o"

# External object files for target io
io_EXTERNAL_OBJECTS =

io: CMakeFiles/io.dir/keyword_1/namespace.cpp.o
io: CMakeFiles/io.dir/build.make
io: CMakeFiles/io.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable io"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/io.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/io.dir/build: io

.PHONY : CMakeFiles/io.dir/build

CMakeFiles/io.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/io.dir/cmake_clean.cmake
.PHONY : CMakeFiles/io.dir/clean

CMakeFiles/io.dir/depend:
	cd /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2 /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2 /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/cmake-build-debug /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/cmake-build-debug /Users/jangwonik/Desktop/git_repository/C-Language-Lab/jang-won-ik/source2/cmake-build-debug/CMakeFiles/io.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/io.dir/depend

