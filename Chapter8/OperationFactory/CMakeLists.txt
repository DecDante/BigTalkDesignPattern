file(GLOB H_FILES *.h)
file(GLOB CPP_FILES *.cpp)

add_executable(OperationFactory ${H_FILES} ${CPP_FILES})