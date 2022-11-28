cmake_minimum_required(VERSION 3.12)

project(Strategy)

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB H_FILES *.h)
file(GLOB CPP_FILES *.cpp)
file(GLOB UI_FILES *.ui)

set(CMAKE_AUTOMOC ON)

qt5_wrap_ui(UiFiles ${UI_FILES})

add_executable(${PROJECT_NAME}
  ${H_FILES}
  ${CPP_FILES}
  ${UI_FILES}
)

target_link_libraries(${PROJECT_NAME}
  Qt5::Core
  Qt5::Widgets
  Qt5::Gui
)
