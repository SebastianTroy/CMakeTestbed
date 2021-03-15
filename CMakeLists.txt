cmake_minimum_required(VERSION 3.14)

project(
    CMakeTestbed
    DESCRIPTION "Minimal CMake test-bed"
    LANGUAGES CXX
    VERSION 0.0.1
)

include(FetchContent)

enable_testing()

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# TODO test with a simple Qt project
#find_package(Qt6 COMPONENTS Widgets REQUIRED)

include(json.cmake)
include(fmt.cmake)
include(catch2.cmake)

add_subdirectory(src)
add_subdirectory(test)
