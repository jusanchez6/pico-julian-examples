cmake_minimum_required(VERSION 3.15)

include(pico_sdk_import.cmake)

project(TIMER)

pico_sdk_init()

add_executable(TIMER
    Timer.c
)

target_link_libraries(TIMER
    pico_stdlib
    hardware_gpio
    hardware_spi
)

