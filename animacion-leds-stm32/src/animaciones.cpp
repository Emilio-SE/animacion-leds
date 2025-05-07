#include "animaciones.h"

CRGB leds[NUM_LEDS];

// Efecto Arcoíris
void efectoArcoiris(void *pvParameters) {
    uint8_t hue = 0;
    
    while (1) {
        for (int i = 0; i < NUM_LEDS; i++) {
            leds[i] = CHSV(hue + (i * 10), 255, BRIGHTNESS);
        }
        FastLED.show();
        hue += 3;
        vTaskDelay(pdMS_TO_TICKS(50));
    }
}
