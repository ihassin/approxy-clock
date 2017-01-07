#cmake_minimum_required(VERSION 3.6)
project(approxy_clock)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/unity/unity.c
        src/unity/unity.h
        src/unity/unity_config.h
        src/unity/unity_fixture.c
        src/unity/unity_fixture.h
        src/unity/unity_fixture_internals.h
        src/unity/unity_fixture_malloc_overrides.h
        src/unity/unity_internals.h
        test/test_runners/all_tests.c
        test/test_runners/TestProductionCode_Runner.c
        test/test_runners/TestCanaryCode_Runner.c
        test/TestProductionCode.c
        test/TestCanary.c
        )

set(SOURCE_FILES1 src/main.c src/main.h)

include_directories(.)
include_directories(src)
include_directories(src/unity)
include_directories(test)
include_directories(test/test_runners)

add_executable(approxy_clock ${SOURCE_FILES1})
add_executable(approxy_clock_tests ${SOURCE_FILES})
