# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/jonasalbuquerque/Downloads/clion-2020.3.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jonasalbuquerque/Downloads/clion-2020.3.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/CLionProjects/calculadora-udp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CLionProjects/calculadora-udp/cmake-build-debug

# Include any dependencies generated for this target.
include expression_parser/CMakeFiles/calculadoraUDP_parser.dir/depend.make

# Include the progress variables for this target.
include expression_parser/CMakeFiles/calculadoraUDP_parser.dir/progress.make

# Include the compile flags for this target's objects.
include expression_parser/CMakeFiles/calculadoraUDP_parser.dir/flags.make

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/error.cpp.o: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/flags.make
expression_parser/CMakeFiles/calculadoraUDP_parser.dir/error.cpp.o: ../expression_parser/error.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/calculadora-udp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object expression_parser/CMakeFiles/calculadoraUDP_parser.dir/error.cpp.o"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculadoraUDP_parser.dir/error.cpp.o -c /root/CLionProjects/calculadora-udp/expression_parser/error.cpp

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadoraUDP_parser.dir/error.cpp.i"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/calculadora-udp/expression_parser/error.cpp > CMakeFiles/calculadoraUDP_parser.dir/error.cpp.i

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadoraUDP_parser.dir/error.cpp.s"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/calculadora-udp/expression_parser/error.cpp -o CMakeFiles/calculadoraUDP_parser.dir/error.cpp.s

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.o: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/flags.make
expression_parser/CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.o: ../expression_parser/functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/calculadora-udp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object expression_parser/CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.o"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.o -c /root/CLionProjects/calculadora-udp/expression_parser/functions.cpp

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.i"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/calculadora-udp/expression_parser/functions.cpp > CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.i

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.s"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/calculadora-udp/expression_parser/functions.cpp -o CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.s

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/main.cpp.o: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/flags.make
expression_parser/CMakeFiles/calculadoraUDP_parser.dir/main.cpp.o: ../expression_parser/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/calculadora-udp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object expression_parser/CMakeFiles/calculadoraUDP_parser.dir/main.cpp.o"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculadoraUDP_parser.dir/main.cpp.o -c /root/CLionProjects/calculadora-udp/expression_parser/main.cpp

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadoraUDP_parser.dir/main.cpp.i"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/calculadora-udp/expression_parser/main.cpp > CMakeFiles/calculadoraUDP_parser.dir/main.cpp.i

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadoraUDP_parser.dir/main.cpp.s"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/calculadora-udp/expression_parser/main.cpp -o CMakeFiles/calculadoraUDP_parser.dir/main.cpp.s

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.o: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/flags.make
expression_parser/CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.o: ../expression_parser/parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/calculadora-udp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object expression_parser/CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.o"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.o -c /root/CLionProjects/calculadora-udp/expression_parser/parser.cpp

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.i"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/calculadora-udp/expression_parser/parser.cpp > CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.i

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.s"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/calculadora-udp/expression_parser/parser.cpp -o CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.s

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.o: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/flags.make
expression_parser/CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.o: ../expression_parser/variablelist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/calculadora-udp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object expression_parser/CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.o"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.o -c /root/CLionProjects/calculadora-udp/expression_parser/variablelist.cpp

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.i"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/calculadora-udp/expression_parser/variablelist.cpp > CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.i

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.s"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/calculadora-udp/expression_parser/variablelist.cpp -o CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.s

# Object files for target calculadoraUDP_parser
calculadoraUDP_parser_OBJECTS = \
"CMakeFiles/calculadoraUDP_parser.dir/error.cpp.o" \
"CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.o" \
"CMakeFiles/calculadoraUDP_parser.dir/main.cpp.o" \
"CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.o" \
"CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.o"

# External object files for target calculadoraUDP_parser
calculadoraUDP_parser_EXTERNAL_OBJECTS =

expression_parser/calculadoraUDP_parser: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/error.cpp.o
expression_parser/calculadoraUDP_parser: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/functions.cpp.o
expression_parser/calculadoraUDP_parser: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/main.cpp.o
expression_parser/calculadoraUDP_parser: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/parser.cpp.o
expression_parser/calculadoraUDP_parser: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/variablelist.cpp.o
expression_parser/calculadoraUDP_parser: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/build.make
expression_parser/calculadoraUDP_parser: expression_parser/CMakeFiles/calculadoraUDP_parser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/calculadora-udp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable calculadoraUDP_parser"
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculadoraUDP_parser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
expression_parser/CMakeFiles/calculadoraUDP_parser.dir/build: expression_parser/calculadoraUDP_parser

.PHONY : expression_parser/CMakeFiles/calculadoraUDP_parser.dir/build

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/clean:
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser && $(CMAKE_COMMAND) -P CMakeFiles/calculadoraUDP_parser.dir/cmake_clean.cmake
.PHONY : expression_parser/CMakeFiles/calculadoraUDP_parser.dir/clean

expression_parser/CMakeFiles/calculadoraUDP_parser.dir/depend:
	cd /root/CLionProjects/calculadora-udp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/calculadora-udp /root/CLionProjects/calculadora-udp/expression_parser /root/CLionProjects/calculadora-udp/cmake-build-debug /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser /root/CLionProjects/calculadora-udp/cmake-build-debug/expression_parser/CMakeFiles/calculadoraUDP_parser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : expression_parser/CMakeFiles/calculadoraUDP_parser.dir/depend
