cmake_minimum_required (VERSION 3.5)

project(SimpleClass)

set(SOURCES ${PROJECT_SOURCE_DIR}/src/SimpleClass.cpp)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(SimpleClass STATIC ${SOURCES})

enable_testing()

add_subdirectory(test)