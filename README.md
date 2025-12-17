# ESP32 1.3 inch OLED Display Example

This is a simple Arduino sketch that demonstrates how to use a **1.3 inch SH1106 OLED display** with an **ESP32** board. The code displays static and dynamic text using the **Adafruit_SH110X** library.

---

## Components Used

- ESP32 Development Board  
- 1.3 inch OLED Display (SH1106 controller, 128x64 resolution)  
- Jumper Wires

---

## 🔌 Wiring

| OLED Pin | ESP32 Pin |
|----------|-----------|
| VCC      | 3.3V      |
| GND      | GND       |
| SCL      | GPIO 22   |
| SDA      | GPIO 21   |

>  Note: These are default I2C pins for most ESP32 boards. Adjust if needed.

---

##  Library Dependencies

Install the following libraries via Arduino Library Manager:

- **Adafruit SH110X**
- **Adafruit GFX Library**
- **Wire.h** (included with Arduino IDE)

---

##  How It Works

- Initializes the SH1106 OLED display over I2C.
- Displays some static text on startup.
- In the loop, it refreshes every 2 seconds to show the elapsed time in seconds.

---

##  File Included

- `esp32_oled_display.ino` – Main Arduino sketch

---

##  Output Preview

Hello ESP32!
1.3 inch OLED
Working!

Time: 12s
ESP32 OLED Test

---

##  License

This project is open-source and free to use under the MIT License.
