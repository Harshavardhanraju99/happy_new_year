# 🎉 Happy New Year OLED Display – Arduino UNO

This project displays a **New Year countdown (5 → 1)** on an **OLED SSD1306 display**, waits **10 seconds**, and then shows  
**HAPPY NEW YEAR 2026** permanently in bold text.

---

## 🧰 Hardware Required
- Arduino UNO  
- OLED Display (SSD1306 – 128x64, I2C)  
- Jumper Wires
---
## 🤖 Circut digram 
<img width="850" height="721" alt="Screenshot 2025-12-31 225057" src="https://github.com/user-attachments/assets/1e1592f7-91f9-49eb-9b05-a36bb1bfe588" />

---

## 🔌 Connections (I2C)

| OLED Pin | Arduino UNO |
|--------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

## 📚 Libraries Used
Install from Arduino Library Manager:
- Adafruit GFX Library
- Adafruit SSD1306

---

## ▶️ Working Logic
1. Countdown: **5 → 4 → 3 → 2 → 1**
2. Waits **10 seconds**
3. Displays **HAPPY NEW YEAR 2026**
4. Message stays **constant (no loop)**

---

## 💻 How to Upload
1. Open Arduino IDE
2. Select **Board → Arduino UNO**
3. Install required libraries
4. Upload the sketch
5. Enjoy 🎆

---

## 🧪 Simulation
This project can be simulated using **Wokwi**.

---

## 📜 License
MIT License – Free to use, modify, and share.

---

### 👨‍💻 Author
**Harsha Vardhan Raju Yerra**
