################################################################################
# Ceres
################################################################################
cmake_minimum_required(VERSION 3.30.0 FATAL_ERROR)

# Project
project(Ceres)

# Babylon
add_subdirectory(ext/Babylon Babylon)

# Configure
babylon_configure_app(
    OUTPUT_DIR bin
    INCLUDE_DIRS src
    SOURCE_SEARCH_MASKS src/*.h src/*.cpp
    DEPEND_MODULES Common System
)
