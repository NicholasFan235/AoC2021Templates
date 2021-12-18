

cmake_minimum_required(VERSION 3.15)
message(STATUS "Using CMake version ${CMAKE_VERSION}")

project(cEpiabm LANGUAGES CXX VERSION 0.0.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Link this 'library' to set the C++ standard / compile-time options requested
include(cmake/ProjectSettings.cmake)
add_library(project_settings INTERFACE)
target_compile_features(project_settings INTERFACE cxx_std_17)

# Link this 'library' to use the warnings specified in CompilerWarnings.cmake
add_library(project_warnings INTERFACE)
include(cmake/CompilerWarnings.cmake)
set_project_warnings(project_warnings)

# Sanitiser options if supported by compiler
include(cmake/Sanitisers.cmake)
enable_sanitisers(project_settings)

# allow for static analysis options
include(cmake/StaticAnalysers.cmake)


file(GLOB DAYS "Day*/")

foreach(FOLDER ${DAYS})
    string(REGEX REPLACE "^.*/Day" "Day" FOLDER ${FOLDER})
    add_subdirectory(${FOLDER})
endforeach(FOLDER ${DAYS})

