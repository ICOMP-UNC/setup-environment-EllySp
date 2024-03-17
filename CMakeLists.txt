cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(
        "SO2project"
        VERSION 1.0.0
        DESCRIPTION "CMake C Project template for operative systems 2"
        LANGUAGES C
)

set(CMAKE_C_STANDARD 17)
include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

target_link_libraries(${PROJECT_NAME} SampleStaticCLib SampleDynamicCLib)
