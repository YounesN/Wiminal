cmake_minimum_required(VERSION 3.0)

# Project name
project(Wiminal)

# Require C++14 to compile
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# Install GoogleTest
include(${PROJECT_SOURCE_DIR}/CMake/InstallGoogleTest.cmake)
enable_testing()

# Add necessary directories
include_directories(${PROJECT_SOURCE_DIR})

# List of files
include(${PROJECT_SOURCE_DIR}/CMake/FileLists.cmake)

# Simply link against gtest or gtest_main as needed.
add_executable(${PROJECT_NAME} ${sources})

# Create a library as well for gtest
add_library(${PROJECT_NAME}_Lib STATIC ${sources})

# Add test subdirectory
add_subdirectory(test)