# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/anirudh/cpp-boilerplate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anirudh/cpp-boilerplate/build

# Include any dependencies generated for this target.
include vendor/googletest/googletest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include vendor/googletest/googletest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include vendor/googletest/googletest/CMakeFiles/gtest.dir/flags.make

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: vendor/googletest/googletest/CMakeFiles/gtest.dir/flags.make
vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: ../vendor/googletest/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anirudh/cpp-boilerplate/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd /home/anirudh/cpp-boilerplate/build/vendor/googletest/googletest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /home/anirudh/cpp-boilerplate/vendor/googletest/googletest/src/gtest-all.cc

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /home/anirudh/cpp-boilerplate/build/vendor/googletest/googletest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anirudh/cpp-boilerplate/vendor/googletest/googletest/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /home/anirudh/cpp-boilerplate/build/vendor/googletest/googletest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anirudh/cpp-boilerplate/vendor/googletest/googletest/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires:

.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides: vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires
	$(MAKE) -f vendor/googletest/googletest/CMakeFiles/gtest.dir/build.make vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build
.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build: vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o


# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

vendor/googletest/googletest/libgtest.a: vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
vendor/googletest/googletest/libgtest.a: vendor/googletest/googletest/CMakeFiles/gtest.dir/build.make
vendor/googletest/googletest/libgtest.a: vendor/googletest/googletest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anirudh/cpp-boilerplate/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgtest.a"
	cd /home/anirudh/cpp-boilerplate/build/vendor/googletest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /home/anirudh/cpp-boilerplate/build/vendor/googletest/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vendor/googletest/googletest/CMakeFiles/gtest.dir/build: vendor/googletest/googletest/libgtest.a

.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/build

vendor/googletest/googletest/CMakeFiles/gtest.dir/requires: vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires

.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/requires

vendor/googletest/googletest/CMakeFiles/gtest.dir/clean:
	cd /home/anirudh/cpp-boilerplate/build/vendor/googletest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/clean

vendor/googletest/googletest/CMakeFiles/gtest.dir/depend:
	cd /home/anirudh/cpp-boilerplate/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anirudh/cpp-boilerplate /home/anirudh/cpp-boilerplate/vendor/googletest/googletest /home/anirudh/cpp-boilerplate/build /home/anirudh/cpp-boilerplate/build/vendor/googletest/googletest /home/anirudh/cpp-boilerplate/build/vendor/googletest/googletest/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/depend

