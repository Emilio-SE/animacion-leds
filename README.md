# Act. 1 - Tema 4

### Práctica ambientes de programación usando un RTOS

En el presente repositorio encontrará todo el código generado para este proyecto. Como base, se tomo el framework de arduino programando en C++.

El proyecto se realizó en 2 partes, primero simulado mediante Wokwi utilizando led WS2812 con un ESP32, después, el código se pasó a código utilizado en un STM32 (Blue Pill).

Observará que hay 3 carpetas:

- **animacion-leds-esp32**: contiene el código utilizado para realizar pruebas. Este código sí fue probado y es funcional en la simulación con Wokwi, se realizó utilizando FreeRTOS y Fastled.

- **animacion-leds-stm32**: contiene el código convertido de ESP32 a STM32 utilizando las librerias de STM32duino freeRTOS y Fastled. Este código no fue probado bajo simulación (no fue posible simularlo), pero toma de base el código funcional utilizado en el ESP32.

- **docs**: contiene toda la documentación generada para este diagrama.

El código convertido a stm32 debería ser lo suficientemente funcional, tomando de base el código funcional en esp32.
