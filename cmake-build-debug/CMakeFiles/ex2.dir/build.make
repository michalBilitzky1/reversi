# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/michalbi/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/michalbi/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/michalbi/CLionProjects/ex2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michalbi/CLionProjects/ex2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex2.dir/flags.make

CMakeFiles/ex2.dir/main.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michalbi/CLionProjects/ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/main.cpp.o -c /home/michalbi/CLionProjects/ex2/main.cpp

CMakeFiles/ex2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michalbi/CLionProjects/ex2/main.cpp > CMakeFiles/ex2.dir/main.cpp.i

CMakeFiles/ex2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michalbi/CLionProjects/ex2/main.cpp -o CMakeFiles/ex2.dir/main.cpp.s

CMakeFiles/ex2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/main.cpp.o.requires

CMakeFiles/ex2.dir/main.cpp.o.provides: CMakeFiles/ex2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/main.cpp.o.provides

CMakeFiles/ex2.dir/main.cpp.o.provides.build: CMakeFiles/ex2.dir/main.cpp.o


CMakeFiles/ex2.dir/Board.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michalbi/CLionProjects/ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex2.dir/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/Board.cpp.o -c /home/michalbi/CLionProjects/ex2/Board.cpp

CMakeFiles/ex2.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michalbi/CLionProjects/ex2/Board.cpp > CMakeFiles/ex2.dir/Board.cpp.i

CMakeFiles/ex2.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michalbi/CLionProjects/ex2/Board.cpp -o CMakeFiles/ex2.dir/Board.cpp.s

CMakeFiles/ex2.dir/Board.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/Board.cpp.o.requires

CMakeFiles/ex2.dir/Board.cpp.o.provides: CMakeFiles/ex2.dir/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/Board.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/Board.cpp.o.provides

CMakeFiles/ex2.dir/Board.cpp.o.provides.build: CMakeFiles/ex2.dir/Board.cpp.o


CMakeFiles/ex2.dir/Piece.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/Piece.cpp.o: ../Piece.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michalbi/CLionProjects/ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex2.dir/Piece.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/Piece.cpp.o -c /home/michalbi/CLionProjects/ex2/Piece.cpp

CMakeFiles/ex2.dir/Piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/Piece.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michalbi/CLionProjects/ex2/Piece.cpp > CMakeFiles/ex2.dir/Piece.cpp.i

CMakeFiles/ex2.dir/Piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/Piece.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michalbi/CLionProjects/ex2/Piece.cpp -o CMakeFiles/ex2.dir/Piece.cpp.s

CMakeFiles/ex2.dir/Piece.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/Piece.cpp.o.requires

CMakeFiles/ex2.dir/Piece.cpp.o.provides: CMakeFiles/ex2.dir/Piece.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/Piece.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/Piece.cpp.o.provides

CMakeFiles/ex2.dir/Piece.cpp.o.provides.build: CMakeFiles/ex2.dir/Piece.cpp.o


CMakeFiles/ex2.dir/Steps.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/Steps.cpp.o: ../Steps.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michalbi/CLionProjects/ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex2.dir/Steps.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/Steps.cpp.o -c /home/michalbi/CLionProjects/ex2/Steps.cpp

CMakeFiles/ex2.dir/Steps.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/Steps.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michalbi/CLionProjects/ex2/Steps.cpp > CMakeFiles/ex2.dir/Steps.cpp.i

CMakeFiles/ex2.dir/Steps.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/Steps.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michalbi/CLionProjects/ex2/Steps.cpp -o CMakeFiles/ex2.dir/Steps.cpp.s

CMakeFiles/ex2.dir/Steps.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/Steps.cpp.o.requires

CMakeFiles/ex2.dir/Steps.cpp.o.provides: CMakeFiles/ex2.dir/Steps.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/Steps.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/Steps.cpp.o.provides

CMakeFiles/ex2.dir/Steps.cpp.o.provides.build: CMakeFiles/ex2.dir/Steps.cpp.o


CMakeFiles/ex2.dir/Player.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michalbi/CLionProjects/ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex2.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/Player.cpp.o -c /home/michalbi/CLionProjects/ex2/Player.cpp

CMakeFiles/ex2.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michalbi/CLionProjects/ex2/Player.cpp > CMakeFiles/ex2.dir/Player.cpp.i

CMakeFiles/ex2.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michalbi/CLionProjects/ex2/Player.cpp -o CMakeFiles/ex2.dir/Player.cpp.s

CMakeFiles/ex2.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/Player.cpp.o.requires

CMakeFiles/ex2.dir/Player.cpp.o.provides: CMakeFiles/ex2.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/Player.cpp.o.provides

CMakeFiles/ex2.dir/Player.cpp.o.provides.build: CMakeFiles/ex2.dir/Player.cpp.o


CMakeFiles/ex2.dir/Game.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michalbi/CLionProjects/ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex2.dir/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/Game.cpp.o -c /home/michalbi/CLionProjects/ex2/Game.cpp

CMakeFiles/ex2.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michalbi/CLionProjects/ex2/Game.cpp > CMakeFiles/ex2.dir/Game.cpp.i

CMakeFiles/ex2.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michalbi/CLionProjects/ex2/Game.cpp -o CMakeFiles/ex2.dir/Game.cpp.s

CMakeFiles/ex2.dir/Game.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/Game.cpp.o.requires

CMakeFiles/ex2.dir/Game.cpp.o.provides: CMakeFiles/ex2.dir/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/Game.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/Game.cpp.o.provides

CMakeFiles/ex2.dir/Game.cpp.o.provides.build: CMakeFiles/ex2.dir/Game.cpp.o


# Object files for target ex2
ex2_OBJECTS = \
"CMakeFiles/ex2.dir/main.cpp.o" \
"CMakeFiles/ex2.dir/Board.cpp.o" \
"CMakeFiles/ex2.dir/Piece.cpp.o" \
"CMakeFiles/ex2.dir/Steps.cpp.o" \
"CMakeFiles/ex2.dir/Player.cpp.o" \
"CMakeFiles/ex2.dir/Game.cpp.o"

# External object files for target ex2
ex2_EXTERNAL_OBJECTS =

ex2: CMakeFiles/ex2.dir/main.cpp.o
ex2: CMakeFiles/ex2.dir/Board.cpp.o
ex2: CMakeFiles/ex2.dir/Piece.cpp.o
ex2: CMakeFiles/ex2.dir/Steps.cpp.o
ex2: CMakeFiles/ex2.dir/Player.cpp.o
ex2: CMakeFiles/ex2.dir/Game.cpp.o
ex2: CMakeFiles/ex2.dir/build.make
ex2: CMakeFiles/ex2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michalbi/CLionProjects/ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable ex2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex2.dir/build: ex2

.PHONY : CMakeFiles/ex2.dir/build

CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/main.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/Board.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/Piece.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/Steps.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/Player.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/Game.cpp.o.requires

.PHONY : CMakeFiles/ex2.dir/requires

CMakeFiles/ex2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex2.dir/clean

CMakeFiles/ex2.dir/depend:
	cd /home/michalbi/CLionProjects/ex2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michalbi/CLionProjects/ex2 /home/michalbi/CLionProjects/ex2 /home/michalbi/CLionProjects/ex2/cmake-build-debug /home/michalbi/CLionProjects/ex2/cmake-build-debug /home/michalbi/CLionProjects/ex2/cmake-build-debug/CMakeFiles/ex2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex2.dir/depend

