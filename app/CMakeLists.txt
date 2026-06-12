  cmake_minimum_required(VERSION 3.20.0)

  set(BOARD nucleo_l476rg)

  include("../cmake/zephyr.cmake")
  find_package(Zephyr)

  project(lean_angle_logger)

  target_sources(app PRIVATE src/main.c)