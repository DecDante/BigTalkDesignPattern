cmake_minimum_required(VERSION 3.12)

project(AnimalsSport)

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED) 

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
)

file(GLOB CPP_FILES *.cpp)
file(GLOB H_FILES *.h)
file(GLOB UI_FILES *.ui)

# set(PROJECT_SRCS
  # main.cpp
  # widget.h
  # widget.cpp
# )
# set(PROJECT_UI_FILES
  # widget.ui
# )

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# 不加这句VS中无法直接编译UI文件
qt5_wrap_ui(ui_files ${UI_FILES})

source_group("Resources" FILES
  ${UI_FILES}
)

add_executable(${PROJECT_NAME}
  ${CPP_FILES}
  ${H_FILES}
  ${UI_FILES}
)

target_link_libraries(${PROJECT_NAME}
  Qt5::Core 
  Qt5::Widgets
  Qt5::Gui
)
