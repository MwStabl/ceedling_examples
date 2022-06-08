cmake_minimum_required(VERSION 3.22)
set(CMAKE_C_STANDARD 99)

project(runconfig C)
project(testing C)

file(GLOB_RECURSE SRC_FILES src/*.c)
file(GLOB_RECURSE MOCK_FILES build/test/mocks/*.c)
file(GLOB_RECURSE VENDOR_FILES vendor/*.c)
add_executable(runconfig ${SRC_FILES})
add_executable(testing ${SRC_FILES} test/TestMain.c ${MOCK_FILES} vendor/unity/src/unity.c)
target_include_directories(runconfig PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(testing PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/build/test/mocks vendor/unity/src vendor/cmock/src vendor/c_exception/lib)