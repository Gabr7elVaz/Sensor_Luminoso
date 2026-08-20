#include <Arduino.h>
#include <MD_Parola.h>
#include <MD_MAX72xx.h>

// PINOS DO ESP32-C3
#define DATA_PIN 6
#define CLK_PIN  5
#define CS_PIN   7

// CONFIGURAÇÃO DO MAX7219
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 1 

// Inicializa a biblioteca Parola
MD_Parola letreiro = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
    letreiro.begin();
    letreiro.setIntensity(5); 
    letreiro.displayClear();

    // Configura o texto animado: 
    letreiro.displayText("BEA LINDA!!", PA_CENTER, 100, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}

void loop() {
    if (letreiro.displayAnimate()) {
        letreiro.displayReset();
    }
}