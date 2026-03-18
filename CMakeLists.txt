cmake_minimum_required(VERSION 3.16)
project(SimpleCppCICD LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(core
    src/math.cpp
)

target_include_directories(core
    PUBLIC
        include
)

add_executable(app
    src/main.cpp
)

target_link_libraries(app
    PRIVATE
        core
)

add_executable(unit_test 
    tests/test.cpp
)

target_link_libraries(unit_test 
    PRIVATE
        core
)

enable_testing()
add_test(NAME core_tests COMMAND test)
