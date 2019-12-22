cmake_minimum_required(VERSION 3.15)
project(ex3)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(ex3 main.cpp Lexer.cpp ex1.cpp OpenServerCommand.cpp OpenServerCommand.h Command.h ConnectCommand.cpp
        DefineVarCommand.cpp Data.h Data.cpp WhileCommand.cpp WhileCommand.h ConditionParser.cpp ConditionParser.h
        IfCommand.cpp IfCommand.h Parser.cpp Parser.h SleepCommand.cpp SleepCommand.h PrintCommand.cpp Parser.h)