#pragma once
#include <Arduino.h>
#include <FastLED.h>
#include <FreeRTOS.h>
#include <task.h> 

// Configuración compartida
#define NUM_LEDS 12
#define DATA_PIN PA1
#define BRIGHTNESS 240
extern CRGB leds[NUM_LEDS];

// Declaración de funciones de efectos
void efectoArcoiris(void *pvParameters);