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
include src/CMakeFiles/chessgamelib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/chessgamelib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/chessgamelib.dir/flags.make

src/CMakeFiles/chessgamelib.dir/interface.cpp.o: src/CMakeFiles/chessgamelib.dir/flags.make
src/CMakeFiles/chessgamelib.dir/interface.cpp.o: ../src/interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mbrancal/project_C++/chessgame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/chessgamelib.dir/interface.cpp.o"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chessgamelib.dir/interface.cpp.o -c /home/mbrancal/project_C++/chessgame/src/interface.cpp

src/CMakeFiles/chessgamelib.dir/interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chessgamelib.dir/interface.cpp.i"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mbrancal/project_C++/chessgame/src/interface.cpp > CMakeFiles/chessgamelib.dir/interface.cpp.i

src/CMakeFiles/chessgamelib.dir/interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chessgamelib.dir/interface.cpp.s"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mbrancal/project_C++/chessgame/src/interface.cpp -o CMakeFiles/chessgamelib.dir/interface.cpp.s

src/CMakeFiles/chessgamelib.dir/board.cpp.o: src/CMakeFiles/chessgamelib.dir/flags.make
src/CMakeFiles/chessgamelib.dir/board.cpp.o: ../src/board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mbrancal/project_C++/chessgame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/chessgamelib.dir/board.cpp.o"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chessgamelib.dir/board.cpp.o -c /home/mbrancal/project_C++/chessgame/src/board.cpp

src/CMakeFiles/chessgamelib.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chessgamelib.dir/board.cpp.i"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mbrancal/project_C++/chessgame/src/board.cpp > CMakeFiles/chessgamelib.dir/board.cpp.i

src/CMakeFiles/chessgamelib.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chessgamelib.dir/board.cpp.s"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mbrancal/project_C++/chessgame/src/board.cpp -o CMakeFiles/chessgamelib.dir/board.cpp.s

src/CMakeFiles/chessgamelib.dir/rules.cpp.o: src/CMakeFiles/chessgamelib.dir/flags.make
src/CMakeFiles/chessgamelib.dir/rules.cpp.o: ../src/rules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mbrancal/project_C++/chessgame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/chessgamelib.dir/rules.cpp.o"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chessgamelib.dir/rules.cpp.o -c /home/mbrancal/project_C++/chessgame/src/rules.cpp

src/CMakeFiles/chessgamelib.dir/rules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chessgamelib.dir/rules.cpp.i"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mbrancal/project_C++/chessgame/src/rules.cpp > CMakeFiles/chessgamelib.dir/rules.cpp.i

src/CMakeFiles/chessgamelib.dir/rules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chessgamelib.dir/rules.cpp.s"
	cd /home/mbrancal/project_C++/chessgame/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mbrancal/project_C++/chessgame/src/rules.cpp -o CMakeFiles/chessgamelib.dir/rules.cpp.s

# Object files for target chessgamelib
chessgamelib_OBJECTS = \
"CMakeFiles/chessgamelib.dir/interface.cpp.o" \
"CMakeFiles/chessgamelib.dir/board.cpp.o" \
"CMakeFiles/chessgamelib.dir/rules.cpp.o"

# External object files for target chessgamelib
chessgamelib_EXTERNAL_OBJECTS =

src/libchessgamelib.a: src/CMakeFiles/chessgamelib.dir/interface.cpp.o
src/libchessgamelib.a: src/CMakeFiles/chessgamelib.dir/board.cpp.o
src/libchessgamelib.a: src/CMakeFiles/chessgamelib.dir/rules.cpp.o
src/libchessgamelib.a: src/CMakeFiles/chessgamelib.dir/build.make
src/libchessgamelib.a: src/CMakeFiles/chessgamelib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mbrancal/project_C++/chessgame/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libchessgamelib.a"
	cd /home/mbrancal/project_C++/chessgame/build/src && $(CMAKE_COMMAND) -P CMakeFiles/chessgamelib.dir/cmake_clean_target.cmake
	cd /home/mbrancal/project_C++/chessgame/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chessgamelib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/chessgamelib.dir/build: src/libchessgamelib.a

.PHONY : src/CMakeFiles/chessgamelib.dir/build

src/CMakeFiles/chessgamelib.dir/clean:
	cd /home/mbrancal/project_C++/chessgame/build/src && $(CMAKE_COMMAND) -P CMakeFiles/chessgamelib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/chessgamelib.dir/clean

src/CMakeFiles/chessgamelib.dir/depend:
	cd /home/mbrancal/project_C++/chessgame/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mbrancal/project_C++/chessgame /home/mbrancal/project_C++/chessgame/src /home/mbrancal/project_C++/chessgame/build /home/mbrancal/project_C++/chessgame/build/src /home/mbrancal/project_C++/chessgame/build/src/CMakeFiles/chessgamelib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/chessgamelib.dir/depend

