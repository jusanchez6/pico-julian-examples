#include <stdio.h>
#include <pico/stdio.h>
#include <hardware/gpio.h>
#include <pico/time.h>

// This program generate a blink on GPIO 15 as output
// using a resistor and a external LED

const int LED_PIN = 1;

int main (void) {
    // initialize the libraries and the GPIO 15 as output
    stdio_init_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    

    while (1) {
        
        printf("Led OFF\n");
        gpio_put(LED_PIN,0);
        sleep_ms(1000);

        printf("Led ON\n");
        gpio_put(LED_PIN,1);
        sleep_ms(1000);

    }
}