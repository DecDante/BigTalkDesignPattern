file(GLOB H_FILES *.h)
file(GLOB CPP_FILES *.cpp)

add_executable(${PROJECT_NAME}_v3.0 ${H_FILES} ${CPP_FILES})