# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/danya-lapin/Загрузки/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/danya-lapin/Загрузки/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/danya-lapin/CLionProjects/Gnome sort"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/danya-lapin/CLionProjects/Gnome sort/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/untitled4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled4.dir/flags.make

CMakeFiles/untitled4.dir/Gnome_sort.c.o: CMakeFiles/untitled4.dir/flags.make
CMakeFiles/untitled4.dir/Gnome_sort.c.o: ../Gnome_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/danya-lapin/CLionProjects/Gnome sort/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled4.dir/Gnome_sort.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled4.dir/Gnome_sort.c.o   -c "/home/danya-lapin/CLionProjects/Gnome sort/Gnome_sort.c"

CMakeFiles/untitled4.dir/Gnome_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled4.dir/Gnome_sort.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/danya-lapin/CLionProjects/Gnome sort/Gnome_sort.c" > CMakeFiles/untitled4.dir/Gnome_sort.c.i

CMakeFiles/untitled4.dir/Gnome_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled4.dir/Gnome_sort.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/danya-lapin/CLionProjects/Gnome sort/Gnome_sort.c" -o CMakeFiles/untitled4.dir/Gnome_sort.c.s

# Object files for target untitled4
untitled4_OBJECTS = \
"CMakeFiles/untitled4.dir/Gnome_sort.c.o"

# External object files for target untitled4
untitled4_EXTERNAL_OBJECTS =

untitled4: CMakeFiles/untitled4.dir/Gnome_sort.c.o
untitled4: CMakeFiles/untitled4.dir/build.make
untitled4: CMakeFiles/untitled4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/danya-lapin/CLionProjects/Gnome sort/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable untitled4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled4.dir/build: untitled4

.PHONY : CMakeFiles/untitled4.dir/build

CMakeFiles/untitled4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled4.dir/clean

CMakeFiles/untitled4.dir/depend:
	cd "/home/danya-lapin/CLionProjects/Gnome sort/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/danya-lapin/CLionProjects/Gnome sort" "/home/danya-lapin/CLionProjects/Gnome sort" "/home/danya-lapin/CLionProjects/Gnome sort/cmake-build-debug" "/home/danya-lapin/CLionProjects/Gnome sort/cmake-build-debug" "/home/danya-lapin/CLionProjects/Gnome sort/cmake-build-debug/CMakeFiles/untitled4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/untitled4.dir/depend

