cmake_minimum_required(VERSION 3.12)

project(Iterator)

file(GLOB H_FILES *.h)
file(GLOB CPP_FILES *.cpp)

add_executable(${PROJECT_NAME} ${H_FILES} ${CPP_FILES})
