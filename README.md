# ESP32 MPU6050 IMU Logger

A lightweight C++ project using ESP32 and the MPU6050 IMU module to log and stream real-time orientation data (acceleration + gyroscope) over Serial.

## 📦 Hardware Used
- ESP32 (Devkit V1 or similar)
- MPU6050 (GY-521 breakout board)
- Jumper wires, Breadboard

## ⚙️ Connections
| MPU6050 | ESP32   |
| ------- | ------- |
| VCC     | 3.3V    |
| GND     | GND     |
| SCL     | GPIO 22 |
| SDA     | GPIO 21 |

## 🧠 Features
- I²C-based MPU6050 communication
- Real-time serial logging (accel + gyro)
- Can be extended to send data over BLE/WiFi

## 🛠️ Libraries Used
- [Wire.h](https://www.arduino.cc/en/reference/wire)
- [MPU6050_light.h](https://github.com/rfetick/MPU6050_light)

## 📥 Installation
1. Clone repo and open `src/imu_logger.ino` in Arduino IDE or PlatformIO.
2. Install dependencies.
3. Flash to ESP32 board.

## 📄 Output Format (Serial)
Accel [X,Y,Z] | Gyro [X,Y,Z]
0.12, 0.04, 9.81 | 0.03, 0.01, 0.00


## 🧪 Future Add-ons
- BLE streaming
- CSV logging to SD Card
- Sensor fusion with Kalman filter

## 📃 License
MIT License
