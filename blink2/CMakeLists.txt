cmake_minimum_required(VERSION 3.15)

include(pico_sdk_import.cmake)
project(blink2)
set(PICO_BOARD "pico_w")

pico_sdk_init()

add_executable(blink2
    blink2.c
)

target_link_libraries(blink2 
    pico_stdlib
    )

pico_add_extra_outputs(blink2)

## Habilitar el puerto serial.
pico_enable_stdio_usb(blink2 1)
pico_enable_stdio_uart(blink2 0)

