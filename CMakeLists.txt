cmake_minimum_required (VERSION 2.6)
project(mockcpp_example)
# The version number.
set (Example_VERSION_MAJOR 1)
set (Example_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
    "${PROJECT_SOURCE_DIR}/ExampleConfig.h.in"
    "${PROJECT_BINARY_DIR}/ExampleConfig.h"
    )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# Create a sources variable with a link to all cpp files to compile
set(SRC_LIST
    src/example.cpp
) 
# add the executable
add_executable(mockcpp_example ${SRC_LIST})
