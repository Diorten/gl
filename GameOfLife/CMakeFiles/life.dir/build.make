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
CMAKE_SOURCE_DIR = /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife

# Include any dependencies generated for this target.
include CMakeFiles/life.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/life.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/life.dir/flags.make

CMakeFiles/life.dir/main.cpp.o: CMakeFiles/life.dir/flags.make
CMakeFiles/life.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/life.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/life.dir/main.cpp.o -c /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/main.cpp

CMakeFiles/life.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/life.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/main.cpp > CMakeFiles/life.dir/main.cpp.i

CMakeFiles/life.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/life.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/main.cpp -o CMakeFiles/life.dir/main.cpp.s

CMakeFiles/life.dir/src/GameBoard.cpp.o: CMakeFiles/life.dir/flags.make
CMakeFiles/life.dir/src/GameBoard.cpp.o: src/GameBoard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/life.dir/src/GameBoard.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/life.dir/src/GameBoard.cpp.o -c /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoard.cpp

CMakeFiles/life.dir/src/GameBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/life.dir/src/GameBoard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoard.cpp > CMakeFiles/life.dir/src/GameBoard.cpp.i

CMakeFiles/life.dir/src/GameBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/life.dir/src/GameBoard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoard.cpp -o CMakeFiles/life.dir/src/GameBoard.cpp.s

CMakeFiles/life.dir/src/GameBoardWalc.cpp.o: CMakeFiles/life.dir/flags.make
CMakeFiles/life.dir/src/GameBoardWalc.cpp.o: src/GameBoardWalc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/life.dir/src/GameBoardWalc.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/life.dir/src/GameBoardWalc.cpp.o -c /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoardWalc.cpp

CMakeFiles/life.dir/src/GameBoardWalc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/life.dir/src/GameBoardWalc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoardWalc.cpp > CMakeFiles/life.dir/src/GameBoardWalc.cpp.i

CMakeFiles/life.dir/src/GameBoardWalc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/life.dir/src/GameBoardWalc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoardWalc.cpp -o CMakeFiles/life.dir/src/GameBoardWalc.cpp.s

CMakeFiles/life.dir/src/GameBoardDonut.cpp.o: CMakeFiles/life.dir/flags.make
CMakeFiles/life.dir/src/GameBoardDonut.cpp.o: src/GameBoardDonut.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/life.dir/src/GameBoardDonut.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/life.dir/src/GameBoardDonut.cpp.o -c /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoardDonut.cpp

CMakeFiles/life.dir/src/GameBoardDonut.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/life.dir/src/GameBoardDonut.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoardDonut.cpp > CMakeFiles/life.dir/src/GameBoardDonut.cpp.i

CMakeFiles/life.dir/src/GameBoardDonut.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/life.dir/src/GameBoardDonut.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/src/GameBoardDonut.cpp -o CMakeFiles/life.dir/src/GameBoardDonut.cpp.s

# Object files for target life
life_OBJECTS = \
"CMakeFiles/life.dir/main.cpp.o" \
"CMakeFiles/life.dir/src/GameBoard.cpp.o" \
"CMakeFiles/life.dir/src/GameBoardWalc.cpp.o" \
"CMakeFiles/life.dir/src/GameBoardDonut.cpp.o"

# External object files for target life
life_EXTERNAL_OBJECTS =

life: CMakeFiles/life.dir/main.cpp.o
life: CMakeFiles/life.dir/src/GameBoard.cpp.o
life: CMakeFiles/life.dir/src/GameBoardWalc.cpp.o
life: CMakeFiles/life.dir/src/GameBoardDonut.cpp.o
life: CMakeFiles/life.dir/build.make
life: CMakeFiles/life.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable life"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/life.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/life.dir/build: life

.PHONY : CMakeFiles/life.dir/build

CMakeFiles/life.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/life.dir/cmake_clean.cmake
.PHONY : CMakeFiles/life.dir/clean

CMakeFiles/life.dir/depend:
	cd /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife /home/robert/ProgramowanieObjektowe/Projekt2/GameOfLife/CMakeFiles/life.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/life.dir/depend

