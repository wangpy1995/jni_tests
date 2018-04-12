cmake_minimum_required(VERSION 3.9)
project(jni_tests C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -mavx2")

include_directories(${PROJECT_SOURCE_DIR}/include)

#add_library(jni_tests SHARED include/test_ArrayOp.h src/test_ArrayOp.c)

add_executable(test1 test/test.c)