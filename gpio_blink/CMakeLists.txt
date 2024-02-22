cmake_minimum_required(VERSION 3.15)

include(pico_sdk_import.cmake)
project(GPIO_BLINK)
set(PICO_BOARD "pico_w")

pico_sdk_init()

add_executable(GPIO_BLINK
    gpio_blink.c    
)

target_link_libraries(GPIO_BLINK
    pico_stdlib
    hardware_gpio
    pico_time
)

pico_add_extra_outputs(GPIO_BLINK)

pico_enable_stdio_usb(GPIO_BLINK 1)
pico_enable_stdio_uart(GPIO_BLINK 0)