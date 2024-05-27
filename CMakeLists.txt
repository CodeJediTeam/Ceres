################################################################################
# Ceres
################################################################################
cmake_minimum_required(VERSION 3.29.0 FATAL_ERROR)

# project
project(Ceres CXX)

# sub-projects
add_subdirectory(ext/Babylon Babylon)

# configure
babylon_configure_app(
    OUTPUT_DIR bin
    OUTPUT_NAME_DEBUG_POSTFIX .debug
    INCLUDE_DIRS src
    SRC_SEARCH_DIRS src
    DEPENDS Common System
)
