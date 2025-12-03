cmake_minimum_required(VERSION 4.1)

project(HexagonalRay)
set(CMAKE_CXX_STANDARD 20)

enable_testing()

find_package(GTest REQUIRED)

file(GLOB SOURCES "src/app/*.cpp")
add_library(game_engine 
    src/app/GameEngine.cpp
)

add_executable(game_engine_tests src/tests/GameEngineTests.cpp)
target_include_directories(game_engine_tests PRIVATE app)
target_link_libraries(game_engine_tests game_engine)
target_link_libraries(game_engine_tests GTest::gtest GTest::gtest_main)

add_test(NAME game_engine_tests COMMAND game_engine_tests)
