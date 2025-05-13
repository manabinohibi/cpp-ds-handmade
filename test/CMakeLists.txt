# GoogleTest を FetchContent で取ってくる
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(sample_test sample_test.cpp)
target_link_libraries(sample_test gtest_main)

include(GoogleTest)
gtest_discover_tests(sample_test)
