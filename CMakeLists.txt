cmake_minimum_required(VERSION 3.14)
project(cpp_ds_handmade LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

# ベンチマークもいつか作りたい
option(BUILD_TESTING "Build tests" ON)
option(BUILD_BENCHMARKS "Build benchmarks" OFF)

# テストサブディレクトリ
if(BUILD_TESTING)
    enable_testing()
    add_subdirectory(test)
endif()

