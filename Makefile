# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /mnt/c/Users/aleks/CLionProjects/PAMSI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/aleks/CLionProjects/PAMSI

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /mnt/c/Users/aleks/CLionProjects/PAMSI/CMakeFiles /mnt/c/Users/aleks/CLionProjects/PAMSI/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /mnt/c/Users/aleks/CLionProjects/PAMSI/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named PAMSI

# Build rule for target.
PAMSI: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 PAMSI
.PHONY : PAMSI

# fast build rule for target.
PAMSI/fast:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/build
.PHONY : PAMSI/fast

LinkedList.o: LinkedList.cpp.o

.PHONY : LinkedList.o

# target to build an object file
LinkedList.cpp.o:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/LinkedList.cpp.o
.PHONY : LinkedList.cpp.o

LinkedList.i: LinkedList.cpp.i

.PHONY : LinkedList.i

# target to preprocess a source file
LinkedList.cpp.i:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/LinkedList.cpp.i
.PHONY : LinkedList.cpp.i

LinkedList.s: LinkedList.cpp.s

.PHONY : LinkedList.s

# target to generate assembly for a file
LinkedList.cpp.s:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/LinkedList.cpp.s
.PHONY : LinkedList.cpp.s

PriorityQueue.o: PriorityQueue.cpp.o

.PHONY : PriorityQueue.o

# target to build an object file
PriorityQueue.cpp.o:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/PriorityQueue.cpp.o
.PHONY : PriorityQueue.cpp.o

PriorityQueue.i: PriorityQueue.cpp.i

.PHONY : PriorityQueue.i

# target to preprocess a source file
PriorityQueue.cpp.i:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/PriorityQueue.cpp.i
.PHONY : PriorityQueue.cpp.i

PriorityQueue.s: PriorityQueue.cpp.s

.PHONY : PriorityQueue.s

# target to generate assembly for a file
PriorityQueue.cpp.s:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/PriorityQueue.cpp.s
.PHONY : PriorityQueue.cpp.s

SNode.o: SNode.cpp.o

.PHONY : SNode.o

# target to build an object file
SNode.cpp.o:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/SNode.cpp.o
.PHONY : SNode.cpp.o

SNode.i: SNode.cpp.i

.PHONY : SNode.i

# target to preprocess a source file
SNode.cpp.i:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/SNode.cpp.i
.PHONY : SNode.cpp.i

SNode.s: SNode.cpp.s

.PHONY : SNode.s

# target to generate assembly for a file
SNode.cpp.s:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/SNode.cpp.s
.PHONY : SNode.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/main.cpp.s
.PHONY : main.cpp.s

templates.o: templates.cpp.o

.PHONY : templates.o

# target to build an object file
templates.cpp.o:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/templates.cpp.o
.PHONY : templates.cpp.o

templates.i: templates.cpp.i

.PHONY : templates.i

# target to preprocess a source file
templates.cpp.i:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/templates.cpp.i
.PHONY : templates.cpp.i

templates.s: templates.cpp.s

.PHONY : templates.s

# target to generate assembly for a file
templates.cpp.s:
	$(MAKE) -f CMakeFiles/PAMSI.dir/build.make CMakeFiles/PAMSI.dir/templates.cpp.s
.PHONY : templates.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... PAMSI"
	@echo "... LinkedList.o"
	@echo "... LinkedList.i"
	@echo "... LinkedList.s"
	@echo "... PriorityQueue.o"
	@echo "... PriorityQueue.i"
	@echo "... PriorityQueue.s"
	@echo "... SNode.o"
	@echo "... SNode.i"
	@echo "... SNode.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... templates.o"
	@echo "... templates.i"
	@echo "... templates.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

