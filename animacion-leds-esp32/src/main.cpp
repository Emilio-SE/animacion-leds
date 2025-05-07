#include "animaciones.h"

void setup() {
    Serial.begin(115200);
    
    // Inicializar FastLED
    FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
    FastLED.setBrightness(BRIGHTNESS);
    FastLED.clear();
    FastLED.show();

    // Iniciar efecto arcoíris
    xTaskCreate(
        efectoArcoiris,                     // Función del efecto
        "animacionLeds",                    // Nombre descriptivo
        2048,                               // Stack size
        NULL,                               // Parámetros
        1,                                  // Prioridad
        NULL                                // Task handle
    );
}

void loop() {
    //Pausa el Loop
    vTaskDelay(portMAX_DELAY);
}