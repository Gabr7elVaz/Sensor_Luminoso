# Letreiro Digital - Next Lab

Protótipo de um letreiro digital contínuo (*scrolling*). O projeto utiliza um microcontrolador ESP32-C3 para controlar um módulo de Matriz de LED 8x8.

## 🛠️ Hardware Utilizado
*   **Microcontrolador:** ESP32-C3 Super Mini
*   **Módulo:** Matriz de LED 8x8 (Controlador MAX7219)
*   **Conexões:**
    *   `VCC` -> `5V / VBUS`
    *   `GND` -> `GND`
    *   `DIN` -> `GPIO 6`
    *   `CS`  -> `GPIO 7`
    *   `CLK` -> `GPIO 5`

## 💻 Software
Desenvolvido em **C++** utilizando **VS Code + PlatformIO**.
As bibliotecas utilizadas para a animação do letreiro foram:
*   `MD_MAX72XX` (Configurada para `FC16_HW`)
*   `MD_Parola`

## ⚙️ Como Executar
1. Clone este repositório.
2. Abra a pasta do projeto no VS Code com a extensão PlatformIO instalada.
3. Faça o Build e Upload.
