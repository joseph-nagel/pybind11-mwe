cmake_minimum_required(VERSION 3.27.4)

project(pybind11-example)

add_library(int SHARED src/add.cpp src/integer.cpp)
target_include_directories(int PUBLIC include)

add_subdirectory(extern/pybind11)

pybind11_add_module(pyinteger src/wrapper.cpp)
target_include_directories(pyinteger PUBLIC include extern/pybind11/include)
target_link_libraries(pyinteger PUBLIC int)

