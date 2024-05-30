# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(DocumentFactory)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/word_document.cpp
    src/pdf_document.cpp
)

# Add executable target
add_executable(DocumentFactory ${SOURCES})
