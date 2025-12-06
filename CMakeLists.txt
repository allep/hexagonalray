cmake_minimum_required(VERSION 4.1)

project(HexagonalRay)
set(CMAKE_CXX_STANDARD 20)

enable_testing()

find_package(GTest REQUIRED)
find_package(raylib REQUIRED)

file(GLOB SOURCES "src/app/*.cpp")
add_library(game_engine 
    src/app/GameEngine.cpp
    src/app/PlayerInput.cpp
)

add_executable(game_engine_tests src/tests/GameEngineTests.cpp)
target_include_directories(game_engine_tests PRIVATE src/app)
target_link_libraries(game_engine_tests PRIVATE game_engine)
target_link_libraries(game_engine_tests PRIVATE GTest::gtest GTest::gtest_main)

add_test(NAME game_engine_tests COMMAND game_engine_tests)

add_executable(HexagonalRay src/main/main.cpp)
target_include_directories(HexagonalRay PRIVATE src/app src/outbound_adapters)
target_link_libraries(HexagonalRay PRIVATE game_engine raylib)

if(UNIX AND NOT APPLE)
    target_link_libraries(HexagonalRay PRIVATE m pthread dl rt X11)
endif()

if(APPLE)
    target_link_libraries(HexagonalRay PRIVATE "-framework OpenGL" "-framework Cocoa" "-framework IOKit")
endif()
