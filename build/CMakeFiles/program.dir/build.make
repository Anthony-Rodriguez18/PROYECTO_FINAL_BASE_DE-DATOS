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
CMAKE_SOURCE_DIR = /home/dev/Projects/others/ariana/database

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dev/Projects/others/ariana/database/build

# Include any dependencies generated for this target.
include CMakeFiles/program.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program.dir/flags.make

CMakeFiles/program.dir/src/main.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/Projects/others/ariana/database/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/program.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/main.cpp.o -c /home/dev/Projects/others/ariana/database/src/main.cpp

CMakeFiles/program.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/others/ariana/database/src/main.cpp > CMakeFiles/program.dir/src/main.cpp.i

CMakeFiles/program.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/others/ariana/database/src/main.cpp -o CMakeFiles/program.dir/src/main.cpp.s

CMakeFiles/program.dir/src/menu.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/menu.cpp.o: ../src/menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/Projects/others/ariana/database/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/program.dir/src/menu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/menu.cpp.o -c /home/dev/Projects/others/ariana/database/src/menu.cpp

CMakeFiles/program.dir/src/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/others/ariana/database/src/menu.cpp > CMakeFiles/program.dir/src/menu.cpp.i

CMakeFiles/program.dir/src/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/others/ariana/database/src/menu.cpp -o CMakeFiles/program.dir/src/menu.cpp.s

CMakeFiles/program.dir/src/user.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/user.cpp.o: ../src/user.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/Projects/others/ariana/database/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/program.dir/src/user.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/user.cpp.o -c /home/dev/Projects/others/ariana/database/src/user.cpp

CMakeFiles/program.dir/src/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/user.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/others/ariana/database/src/user.cpp > CMakeFiles/program.dir/src/user.cpp.i

CMakeFiles/program.dir/src/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/user.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/others/ariana/database/src/user.cpp -o CMakeFiles/program.dir/src/user.cpp.s

CMakeFiles/program.dir/src/role.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/role.cpp.o: ../src/role.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/Projects/others/ariana/database/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/program.dir/src/role.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/role.cpp.o -c /home/dev/Projects/others/ariana/database/src/role.cpp

CMakeFiles/program.dir/src/role.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/role.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/others/ariana/database/src/role.cpp > CMakeFiles/program.dir/src/role.cpp.i

CMakeFiles/program.dir/src/role.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/role.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/others/ariana/database/src/role.cpp -o CMakeFiles/program.dir/src/role.cpp.s

CMakeFiles/program.dir/src/permission_user.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/permission_user.cpp.o: ../src/permission_user.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/Projects/others/ariana/database/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/program.dir/src/permission_user.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/permission_user.cpp.o -c /home/dev/Projects/others/ariana/database/src/permission_user.cpp

CMakeFiles/program.dir/src/permission_user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/permission_user.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/others/ariana/database/src/permission_user.cpp > CMakeFiles/program.dir/src/permission_user.cpp.i

CMakeFiles/program.dir/src/permission_user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/permission_user.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/others/ariana/database/src/permission_user.cpp -o CMakeFiles/program.dir/src/permission_user.cpp.s

CMakeFiles/program.dir/src/permission.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/permission.cpp.o: ../src/permission.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/Projects/others/ariana/database/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/program.dir/src/permission.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/permission.cpp.o -c /home/dev/Projects/others/ariana/database/src/permission.cpp

CMakeFiles/program.dir/src/permission.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/permission.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Projects/others/ariana/database/src/permission.cpp > CMakeFiles/program.dir/src/permission.cpp.i

CMakeFiles/program.dir/src/permission.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/permission.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Projects/others/ariana/database/src/permission.cpp -o CMakeFiles/program.dir/src/permission.cpp.s

# Object files for target program
program_OBJECTS = \
"CMakeFiles/program.dir/src/main.cpp.o" \
"CMakeFiles/program.dir/src/menu.cpp.o" \
"CMakeFiles/program.dir/src/user.cpp.o" \
"CMakeFiles/program.dir/src/role.cpp.o" \
"CMakeFiles/program.dir/src/permission_user.cpp.o" \
"CMakeFiles/program.dir/src/permission.cpp.o"

# External object files for target program
program_EXTERNAL_OBJECTS =

program: CMakeFiles/program.dir/src/main.cpp.o
program: CMakeFiles/program.dir/src/menu.cpp.o
program: CMakeFiles/program.dir/src/user.cpp.o
program: CMakeFiles/program.dir/src/role.cpp.o
program: CMakeFiles/program.dir/src/permission_user.cpp.o
program: CMakeFiles/program.dir/src/permission.cpp.o
program: CMakeFiles/program.dir/build.make
program: CMakeFiles/program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dev/Projects/others/ariana/database/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable program"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/program.dir/build: program

.PHONY : CMakeFiles/program.dir/build

CMakeFiles/program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program.dir/clean

CMakeFiles/program.dir/depend:
	cd /home/dev/Projects/others/ariana/database/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev/Projects/others/ariana/database /home/dev/Projects/others/ariana/database /home/dev/Projects/others/ariana/database/build /home/dev/Projects/others/ariana/database/build /home/dev/Projects/others/ariana/database/build/CMakeFiles/program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/program.dir/depend

