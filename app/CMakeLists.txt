cmake_minimum_required(VERSION 3.20.0)

set(BOARD nucleo_l476rg)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(EXTRA_CONF_FILE "debug.conf")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(EXTRA_CONF_FILE "release.conf")
else()
    message(ERROR "Invalid build configuration")
endif()

include("../cmake/zephyr.cmake")
find_package(Zephyr REQUIRED HINTS ${ZEPHYR_BASE})

project(lean_angle_logger)

target_sources(app PRIVATE src/main.c)
