# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/98/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/98/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adi/CLionProjects/ex3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adi/CLionProjects/ex3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex3.dir/flags.make

CMakeFiles/ex3.dir/main.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/main.cpp.o -c /home/adi/CLionProjects/ex3/main.cpp

CMakeFiles/ex3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/main.cpp > CMakeFiles/ex3.dir/main.cpp.i

CMakeFiles/ex3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/main.cpp -o CMakeFiles/ex3.dir/main.cpp.s

CMakeFiles/ex3.dir/Lexer.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/Lexer.cpp.o: ../Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex3.dir/Lexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/Lexer.cpp.o -c /home/adi/CLionProjects/ex3/Lexer.cpp

CMakeFiles/ex3.dir/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/Lexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/Lexer.cpp > CMakeFiles/ex3.dir/Lexer.cpp.i

CMakeFiles/ex3.dir/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/Lexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/Lexer.cpp -o CMakeFiles/ex3.dir/Lexer.cpp.s

CMakeFiles/ex3.dir/ex1.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/ex1.cpp.o: ../ex1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex3.dir/ex1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/ex1.cpp.o -c /home/adi/CLionProjects/ex3/ex1.cpp

CMakeFiles/ex3.dir/ex1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/ex1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/ex1.cpp > CMakeFiles/ex3.dir/ex1.cpp.i

CMakeFiles/ex3.dir/ex1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/ex1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/ex1.cpp -o CMakeFiles/ex3.dir/ex1.cpp.s

CMakeFiles/ex3.dir/OpenServerCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/OpenServerCommand.cpp.o: ../OpenServerCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex3.dir/OpenServerCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/OpenServerCommand.cpp.o -c /home/adi/CLionProjects/ex3/OpenServerCommand.cpp

CMakeFiles/ex3.dir/OpenServerCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/OpenServerCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/OpenServerCommand.cpp > CMakeFiles/ex3.dir/OpenServerCommand.cpp.i

CMakeFiles/ex3.dir/OpenServerCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/OpenServerCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/OpenServerCommand.cpp -o CMakeFiles/ex3.dir/OpenServerCommand.cpp.s

CMakeFiles/ex3.dir/ConnectCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/ConnectCommand.cpp.o: ../ConnectCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex3.dir/ConnectCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/ConnectCommand.cpp.o -c /home/adi/CLionProjects/ex3/ConnectCommand.cpp

CMakeFiles/ex3.dir/ConnectCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/ConnectCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/ConnectCommand.cpp > CMakeFiles/ex3.dir/ConnectCommand.cpp.i

CMakeFiles/ex3.dir/ConnectCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/ConnectCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/ConnectCommand.cpp -o CMakeFiles/ex3.dir/ConnectCommand.cpp.s

CMakeFiles/ex3.dir/DefineVarCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/DefineVarCommand.cpp.o: ../DefineVarCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex3.dir/DefineVarCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/DefineVarCommand.cpp.o -c /home/adi/CLionProjects/ex3/DefineVarCommand.cpp

CMakeFiles/ex3.dir/DefineVarCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/DefineVarCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/DefineVarCommand.cpp > CMakeFiles/ex3.dir/DefineVarCommand.cpp.i

CMakeFiles/ex3.dir/DefineVarCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/DefineVarCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/DefineVarCommand.cpp -o CMakeFiles/ex3.dir/DefineVarCommand.cpp.s

CMakeFiles/ex3.dir/Data.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/Data.cpp.o: ../Data.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex3.dir/Data.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/Data.cpp.o -c /home/adi/CLionProjects/ex3/Data.cpp

CMakeFiles/ex3.dir/Data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/Data.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/Data.cpp > CMakeFiles/ex3.dir/Data.cpp.i

CMakeFiles/ex3.dir/Data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/Data.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/Data.cpp -o CMakeFiles/ex3.dir/Data.cpp.s

CMakeFiles/ex3.dir/WhileCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/WhileCommand.cpp.o: ../WhileCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex3.dir/WhileCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/WhileCommand.cpp.o -c /home/adi/CLionProjects/ex3/WhileCommand.cpp

CMakeFiles/ex3.dir/WhileCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/WhileCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/WhileCommand.cpp > CMakeFiles/ex3.dir/WhileCommand.cpp.i

CMakeFiles/ex3.dir/WhileCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/WhileCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/WhileCommand.cpp -o CMakeFiles/ex3.dir/WhileCommand.cpp.s

CMakeFiles/ex3.dir/ConditionParser.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/ConditionParser.cpp.o: ../ConditionParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ex3.dir/ConditionParser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/ConditionParser.cpp.o -c /home/adi/CLionProjects/ex3/ConditionParser.cpp

CMakeFiles/ex3.dir/ConditionParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/ConditionParser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/ConditionParser.cpp > CMakeFiles/ex3.dir/ConditionParser.cpp.i

CMakeFiles/ex3.dir/ConditionParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/ConditionParser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/ConditionParser.cpp -o CMakeFiles/ex3.dir/ConditionParser.cpp.s

CMakeFiles/ex3.dir/IfCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/IfCommand.cpp.o: ../IfCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ex3.dir/IfCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/IfCommand.cpp.o -c /home/adi/CLionProjects/ex3/IfCommand.cpp

CMakeFiles/ex3.dir/IfCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/IfCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/IfCommand.cpp > CMakeFiles/ex3.dir/IfCommand.cpp.i

CMakeFiles/ex3.dir/IfCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/IfCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/IfCommand.cpp -o CMakeFiles/ex3.dir/IfCommand.cpp.s

CMakeFiles/ex3.dir/Parser.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/Parser.cpp.o: ../Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ex3.dir/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/Parser.cpp.o -c /home/adi/CLionProjects/ex3/Parser.cpp

CMakeFiles/ex3.dir/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/Parser.cpp > CMakeFiles/ex3.dir/Parser.cpp.i

CMakeFiles/ex3.dir/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/Parser.cpp -o CMakeFiles/ex3.dir/Parser.cpp.s

CMakeFiles/ex3.dir/SleepCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/SleepCommand.cpp.o: ../SleepCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ex3.dir/SleepCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/SleepCommand.cpp.o -c /home/adi/CLionProjects/ex3/SleepCommand.cpp

CMakeFiles/ex3.dir/SleepCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/SleepCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/SleepCommand.cpp > CMakeFiles/ex3.dir/SleepCommand.cpp.i

CMakeFiles/ex3.dir/SleepCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/SleepCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/SleepCommand.cpp -o CMakeFiles/ex3.dir/SleepCommand.cpp.s

CMakeFiles/ex3.dir/PrintCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/PrintCommand.cpp.o: ../PrintCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ex3.dir/PrintCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/PrintCommand.cpp.o -c /home/adi/CLionProjects/ex3/PrintCommand.cpp

CMakeFiles/ex3.dir/PrintCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/PrintCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/PrintCommand.cpp > CMakeFiles/ex3.dir/PrintCommand.cpp.i

CMakeFiles/ex3.dir/PrintCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/PrintCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/PrintCommand.cpp -o CMakeFiles/ex3.dir/PrintCommand.cpp.s

CMakeFiles/ex3.dir/Singleton.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/Singleton.cpp.o: ../Singleton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ex3.dir/Singleton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/Singleton.cpp.o -c /home/adi/CLionProjects/ex3/Singleton.cpp

CMakeFiles/ex3.dir/Singleton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/Singleton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/Singleton.cpp > CMakeFiles/ex3.dir/Singleton.cpp.i

CMakeFiles/ex3.dir/Singleton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/Singleton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/Singleton.cpp -o CMakeFiles/ex3.dir/Singleton.cpp.s

CMakeFiles/ex3.dir/SetVarCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/SetVarCommand.cpp.o: ../SetVarCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/ex3.dir/SetVarCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/SetVarCommand.cpp.o -c /home/adi/CLionProjects/ex3/SetVarCommand.cpp

CMakeFiles/ex3.dir/SetVarCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/SetVarCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/SetVarCommand.cpp > CMakeFiles/ex3.dir/SetVarCommand.cpp.i

CMakeFiles/ex3.dir/SetVarCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/SetVarCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/SetVarCommand.cpp -o CMakeFiles/ex3.dir/SetVarCommand.cpp.s

CMakeFiles/ex3.dir/Variable.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/Variable.cpp.o: ../Variable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/ex3.dir/Variable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/Variable.cpp.o -c /home/adi/CLionProjects/ex3/Variable.cpp

CMakeFiles/ex3.dir/Variable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/Variable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/Variable.cpp > CMakeFiles/ex3.dir/Variable.cpp.i

CMakeFiles/ex3.dir/Variable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/Variable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/Variable.cpp -o CMakeFiles/ex3.dir/Variable.cpp.s

CMakeFiles/ex3.dir/NumCommand.cpp.o: CMakeFiles/ex3.dir/flags.make
CMakeFiles/ex3.dir/NumCommand.cpp.o: ../NumCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/ex3.dir/NumCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3.dir/NumCommand.cpp.o -c /home/adi/CLionProjects/ex3/NumCommand.cpp

CMakeFiles/ex3.dir/NumCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3.dir/NumCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CLionProjects/ex3/NumCommand.cpp > CMakeFiles/ex3.dir/NumCommand.cpp.i

CMakeFiles/ex3.dir/NumCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3.dir/NumCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CLionProjects/ex3/NumCommand.cpp -o CMakeFiles/ex3.dir/NumCommand.cpp.s

# Object files for target ex3
ex3_OBJECTS = \
"CMakeFiles/ex3.dir/main.cpp.o" \
"CMakeFiles/ex3.dir/Lexer.cpp.o" \
"CMakeFiles/ex3.dir/ex1.cpp.o" \
"CMakeFiles/ex3.dir/OpenServerCommand.cpp.o" \
"CMakeFiles/ex3.dir/ConnectCommand.cpp.o" \
"CMakeFiles/ex3.dir/DefineVarCommand.cpp.o" \
"CMakeFiles/ex3.dir/Data.cpp.o" \
"CMakeFiles/ex3.dir/WhileCommand.cpp.o" \
"CMakeFiles/ex3.dir/ConditionParser.cpp.o" \
"CMakeFiles/ex3.dir/IfCommand.cpp.o" \
"CMakeFiles/ex3.dir/Parser.cpp.o" \
"CMakeFiles/ex3.dir/SleepCommand.cpp.o" \
"CMakeFiles/ex3.dir/PrintCommand.cpp.o" \
"CMakeFiles/ex3.dir/Singleton.cpp.o" \
"CMakeFiles/ex3.dir/SetVarCommand.cpp.o" \
"CMakeFiles/ex3.dir/Variable.cpp.o" \
"CMakeFiles/ex3.dir/NumCommand.cpp.o"

# External object files for target ex3
ex3_EXTERNAL_OBJECTS =

ex3: CMakeFiles/ex3.dir/main.cpp.o
ex3: CMakeFiles/ex3.dir/Lexer.cpp.o
ex3: CMakeFiles/ex3.dir/ex1.cpp.o
ex3: CMakeFiles/ex3.dir/OpenServerCommand.cpp.o
ex3: CMakeFiles/ex3.dir/ConnectCommand.cpp.o
ex3: CMakeFiles/ex3.dir/DefineVarCommand.cpp.o
ex3: CMakeFiles/ex3.dir/Data.cpp.o
ex3: CMakeFiles/ex3.dir/WhileCommand.cpp.o
ex3: CMakeFiles/ex3.dir/ConditionParser.cpp.o
ex3: CMakeFiles/ex3.dir/IfCommand.cpp.o
ex3: CMakeFiles/ex3.dir/Parser.cpp.o
ex3: CMakeFiles/ex3.dir/SleepCommand.cpp.o
ex3: CMakeFiles/ex3.dir/PrintCommand.cpp.o
ex3: CMakeFiles/ex3.dir/Singleton.cpp.o
ex3: CMakeFiles/ex3.dir/SetVarCommand.cpp.o
ex3: CMakeFiles/ex3.dir/Variable.cpp.o
ex3: CMakeFiles/ex3.dir/NumCommand.cpp.o
ex3: CMakeFiles/ex3.dir/build.make
ex3: CMakeFiles/ex3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable ex3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex3.dir/build: ex3

.PHONY : CMakeFiles/ex3.dir/build

CMakeFiles/ex3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex3.dir/clean

CMakeFiles/ex3.dir/depend:
	cd /home/adi/CLionProjects/ex3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adi/CLionProjects/ex3 /home/adi/CLionProjects/ex3 /home/adi/CLionProjects/ex3/cmake-build-debug /home/adi/CLionProjects/ex3/cmake-build-debug /home/adi/CLionProjects/ex3/cmake-build-debug/CMakeFiles/ex3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex3.dir/depend

