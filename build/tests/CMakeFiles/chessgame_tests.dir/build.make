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
CMAKE_SOURCE_DIR = /home/mbrancal/project_C++/chessgame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mbrancal/project_C++/chessgame/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/chessgame_tests.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/chessgame_tests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/chessgame_tests.dir/flags.make

tests/CMakeFiles/chessgame_tests.dir/test.cpp.o: tests/CMakeFiles/chessgame_tests.dir/flags.make
tests/CMakeFiles/chessgame_tests.dir/test.cpp.o: ../tests/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mbrancal/project_C++/chessgame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/chessgame_tests.dir/test.cpp.o"
	cd /home/mbrancal/project_C++/chessgame/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chessgame_tests.dir/test.cpp.o -c /home/mbrancal/project_C++/chessgame/tests/test.cpp

tests/CMakeFiles/chessgame_tests.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chessgame_tests.dir/test.cpp.i"
	cd /home/mbrancal/project_C++/chessgame/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mbrancal/project_C++/chessgame/tests/test.cpp > CMakeFiles/chessgame_tests.dir/test.cpp.i

tests/CMakeFiles/chessgame_tests.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chessgame_tests.dir/test.cpp.s"
	cd /home/mbrancal/project_C++/chessgame/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mbrancal/project_C++/chessgame/tests/test.cpp -o CMakeFiles/chessgame_tests.dir/test.cpp.s

# Object files for target chessgame_tests
chessgame_tests_OBJECTS = \
"CMakeFiles/chessgame_tests.dir/test.cpp.o"

# External object files for target chessgame_tests
chessgame_tests_EXTERNAL_OBJECTS =

tests/chessgame_tests: tests/CMakeFiles/chessgame_tests.dir/test.cpp.o
tests/chessgame_tests: tests/CMakeFiles/chessgame_tests.dir/build.make
tests/chessgame_tests: src/libchessgamelib.a
tests/chessgame_tests: tests/CMakeFiles/chessgame_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mbrancal/project_C++/chessgame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chessgame_tests"
	cd /home/mbrancal/project_C++/chessgame/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chessgame_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/chessgame_tests.dir/build: tests/chessgame_tests

.PHONY : tests/CMakeFiles/chessgame_tests.dir/build

tests/CMakeFiles/chessgame_tests.dir/clean:
	cd /home/mbrancal/project_C++/chessgame/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/chessgame_tests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/chessgame_tests.dir/clean

tests/CMakeFiles/chessgame_tests.dir/depend:
	cd /home/mbrancal/project_C++/chessgame/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mbrancal/project_C++/chessgame /home/mbrancal/project_C++/chessgame/tests /home/mbrancal/project_C++/chessgame/build /home/mbrancal/project_C++/chessgame/build/tests /home/mbrancal/project_C++/chessgame/build/tests/CMakeFiles/chessgame_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/chessgame_tests.dir/depend

