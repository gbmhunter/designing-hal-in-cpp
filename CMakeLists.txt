cmake_minimum_required(VERSION 3.10)

project(MyProject)

set(CMAKE_CXX_STANDARD 20)


add_executable(MyExecutable src/main.cpp)
target_include_directories(MyExecutable PRIVATE ${CMAKE_SOURCE_DIR}/src)

add_executable(templates src/templates/main.cpp)
add_executable(concepts-inheritance src/concepts-inheritance/main.cpp)
