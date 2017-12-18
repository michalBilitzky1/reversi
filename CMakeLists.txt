cmake_minimum_required(VERSION 3.8)
project(ex2)

set(CMAKE_CXX_STANDARD 98)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES src/Board.cpp src/Board.h src/Piece.cpp src/Piece.h src/Steps.cpp src/Steps.h src/Game.cpp src/Game.h src/GameLogic.h src/PlayerComputer.cpp src/PlayerComputer.h src/Player.cpp src/Player.h src/PlayerHuman.cpp src/PlayerHuman.h src/main.cpp src/Client.cpp src/Client.h src/RemotePlayer.cpp src/RemotePlayer.h src/Sign.h Tests/ReadMove.cpp cmake-build-debug/main1.cpp)

set(TEST_FILES
        Tests/main_test.cpp
        src/Board.cpp src/Board.h src/Piece.cpp src/Piece.h src/Steps.cpp src/Steps.h src/Game.cpp src/Game.h src/GameLogic.h src/PlayerComputer.cpp src/PlayerComputer.h src/Player.cpp src/Player.h Tests/RowTest.cpp Tests/BoardSizeTest.cpp src/Sign.h Tests/ComputerMove.cpp Tests/PrintOptionsTest.cpp Tests/WinnerTest.cpp Tests/CheckInputTest.cpp src/PlayerHuman.cpp src/PlayerHuman.h src/main.cpp src/Client.cpp src/Client.h src/RemotePlayer.h src/RemotePlayer.cpp src/Sign.h "Tests/checkClientMove.cpp" Tests/ReadMove.cpp cmake-build-debug/main1.cpp)
add_executable(ex2 ${SOURCE_FILES} main.cpp cmake-build-debug/main1.cpp)
add_executable(ReversiTest ${TEST_FILES} ${SOURCE_FILES}  Tests/BoardSizeTest.cpp Tests/ReadMove.cpp Tests/checkClientMove.cpp Tests/CheckInputTest.cpp Tests/ComputerMove.cpp Tests/PrintOptionsTest.cpp Tests/RowTest.cpp Tests/WinnerTest.cpp cmake-build-debug/main1.cpp)

target_link_libraries(ReversiTest gtest gtest_main)