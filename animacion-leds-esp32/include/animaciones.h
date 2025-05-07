#pragma once
#include <Arduino.h>
#include <FastLED.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

// Configuración compartida
#define NUM_LEDS 12
#define DATA_PIN 26
#define BRIGHTNESS 240
extern CRGB leds[NUM_LEDS];

// Declaración de funciones de efectos
void efectoArcoiris(void *pvParameters);