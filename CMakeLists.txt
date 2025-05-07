cmake_minimum_required(VERSION 3.14)
project(ds_learning)

# C++17 or later推奨
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GoogleTest
add_subdirectory(third_party/googletest)

enable_testing()

# テスト用ソースファイル
add_executable(run_tests tests/sample_test.cpp)

target_include_directories(run_tests PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(run_tests gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(run_tests)
