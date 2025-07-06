# Ioniser-Based-Air-Purifier

A compact and intelligent air purification system that combines **real-time air quality monitoring** with **automated purification** using an **ioniser** and **micro fan**, controlled via an **Arduino Nano**. It is designed to detect harmful gases using an MQ-135 sensor and purify indoor air efficiently and cost-effectively.

---

## 🌀 Project Overview

Indoor air can be up to **5 times more polluted** than outdoor air. This project helps mitigate that using:

- MQ-135 sensor for gas detection (CO₂, NH₃, benzene, VOCs, etc.)
- Ionizer module for releasing negative ions
- Micro fan for air circulation
- Arduino Nano for processing and control
- Optional display (OLED/LCD) for real-time AQI monitoring

The purifier runs only when needed, saving power while maintaining clean air in homes, offices, schools, and more.

---

## ⚙️ Hardware Components

| Component       | Quantity | Description                          |
|----------------|----------|--------------------------------------|
| Arduino Nano    | 1        | Microcontroller                      |
| MQ-135 Sensor   | 1        | Air quality/gas detection            |
| Ionizer Module (XHJ-D12F) | 1 | Releases negative ions              |
| Micro Fan       | 1        | Circulates air                       |
| Jumper Wires    | ~        | For connections                      |
| Power Supply    | 1        | 5V/12V regulated                     |

---

## 🔌 Circuit Diagram (Wiring Overview)

- **MQ135 Sensor:**
  - VCC → 5V (Nano)
  - GND → GND
  - AOUT → A0

- **Ionizer:**
  - VIN → 12V (external supply)
  - GND → Common GND
  - Control pin (optional via transistor/MOSFET switch)

- **Micro Fan:**
  - VCC → 12V
  - GND → Common GND
  - Optional: control via transistor (Arduino digital pin)

- **Arduino Nano:**
  - A0 → Reads MQ135 output
  - D pins → (optional for display or switching relays)

---

## 🧠 Features

- Real-time monitoring of air pollutants
- Automatic activation of fan and ionizer when pollution is detected
- Energy efficient: works only when needed
- Portable and low-cost design
- Expandable: can integrate IoT or LCD display

---

## 📈 Applications

- Homes, Offices
- Hospitals, Schools
- Public Transport, Shopping Malls
- Industrial Zones

---

## 🔮 Future Enhancements

- Add PM2.5 sensor for fine dust
- Integrate IoT for remote air monitoring (via ESP32)
- Use machine learning for predictive activation
- OLED/LCD for AQI display

---

##  Model Image

![Image](https://github.com/user-attachments/assets/76a27d00-81da-48f8-86b3-01610e2e47af)


