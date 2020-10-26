cmake_minimum_required(VERSION 3.0)

set(This WiminalTest)

# List of files
include(${PROJECT_SOURCE_DIR}/CMake/FileLists.cmake)

add_executable(${This} ${test_sources})
target_link_libraries(${This} PUBLIC
  gtest_main
  Wiminal_Lib
)

add_test(
  NAME ${This}
  COMMAND ${This}
)