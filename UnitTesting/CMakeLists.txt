cmake_minimum_required(VERSION 3.21)

add_subdirectory(./lib/googletest-release-1.11.0)
set(gtest_SOURCE_DIR, ./lib/googletest-release-1.11.0/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp)
add_executable(runColumnTests ${TEST_SOURCE_FILES})
target_link_libraries(runColumnTests gtest gtest_main core)
