################################################################################
# Ceres
################################################################################
cmake_minimum_required(VERSION 3.29.0 FATAL_ERROR)

# Project
project(Ceres CXX)

# Babylon
add_subdirectory(ext/Babylon Babylon)

# Configure
babylon_configure_app(
    NAME ${PROJECT_NAME}
    ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}
    OUTPUT_DIR bin
    OUTPUT_NAME ${PROJECT_NAME}
    INCLUDE_DIRS src
    SOURCE_SEARCH_MASKS src/*.h src/*.cpp
    DEPEND_MODULES Common System
)
