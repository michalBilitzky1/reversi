cmake_minimum_required(VERSION 3.8)
project(ex2)

set(CMAKE_CXX_STANDARD 98)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES src/Board.cpp src/Board.h src/Piece.cpp src/Piece.h src/Steps.cpp src/Steps.h src/PlayerHuman.h src/Game.cpp src/Game.h src/GameLogic.h src/ComputerBoard.cpp src/ComputerBoard.h src/PlayerComputer.cpp src/Player.cpp src/Player.h)

set(TEST_FILES
        Tests/main_test.cpp
        src/Board.cpp src/Board.h src/Piece.cpp src/Piece.h src/Steps.cpp src/Steps.h src/PlayerHuman.h src/Game.cpp src/Game.h src/GameLogic.h src/ComputerBoard.cpp src/ComputerBoard.h src/PlayerComputer.cpp src/Player.cpp src/Player.h Tests/test1.cpp)
add_executable(ex2 ${SOURCE_FILES} main.cpp)
add_executable(ReversiTest ${TEST_FILES} ${SOURCE_FILES})

target_link_libraries(ReversiTest gtest gtest_main)