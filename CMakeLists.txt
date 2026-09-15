cmake_minimum_required(VERSION 3.30)
project(MyPractice)

set(CMAKE_CXX_STANDARD 17)

# Main project
add_executable(MyPractice main.cpp
        sorting.cpp
)

# Every other .cpp in the root becomes its own target automatically
file(GLOB PRACTICE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
list(REMOVE_ITEM PRACTICE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")

foreach(file ${PRACTICE_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach()