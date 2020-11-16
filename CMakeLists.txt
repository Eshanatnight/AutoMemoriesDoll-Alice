cmake_minimum_required(VERSION 3.10)

# set the project name
project(MyProject VERSION 1.0.0)

# add the executable
add_executable(MyProj ./src/main.cpp)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)