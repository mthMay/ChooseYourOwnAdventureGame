cmake_minimum_required(VERSION 3.24)
project(C___Adventure_Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(C___Adventure_Game main.cpp Menu.h Menu.cpp Character.h Character.cpp Player.h Player.cpp Enemy.h Enemy.cpp Scenario.h Scenario.cpp CurrentStage.h CurrentStage.cpp Choices.h Choices.cpp)
