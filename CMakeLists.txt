cmake_minimum_required(VERSION 3.9)
project(jni_tests C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(jni_tests SHARED include/test_ArrayOp.h src/test_ArrayOp.c)