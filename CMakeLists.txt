cmake_minimum_required(VERSION 3.10)

# Project Name
project(ScientificCalculator)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Executable
add_executable(ScientificCalculator ${CMAKE_SOURCE_DIR}/calculator.cpp)

# Add Test Executable
add_executable(TestCalculator ${CMAKE_SOURCE_DIR}/test.cpp)

# Enable Testing
include(CTest)
enable_testing()

# Add Tests
add_test(NAME SquareRootTest COMMAND TestCalculator)
add_test(NAME FactorialTest COMMAND TestCalculator)
add_test(NAME LogTest COMMAND TestCalculator)
add_test(NAME PowerTest COMMAND TestCalculator)
