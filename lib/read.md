# Arduino Pro Micro VESC & Bluetooth Interface Project

This project showcases code developed by Ruggero Cadamuro for the Arduino Pro Micro (based on the ATMEGA32u4 microcontroller) to interface with a FLIPSKY 75100 Electronic Speed Controller (VESC) and establish Bluetooth communication via an ESP32 C3 module.

**Key Features:**

* **Hardware Serial Communication with FLIPSKY 75100 VESC:** Utilizes the hardware UART (TX/RX) of the Arduino Pro Micro to communicate with the FLIPSKY 75100 VESC. This enables real-time data exchange and control of the VESC.
* **Bluetooth Connectivity via ESP32 C3:** Integrates an ESP32 C3 module for Bluetooth communication. This allows for wireless data transmission and potentially remote control or monitoring of the VESC system.

**Libraries and Codebases Used:**

This project leverages the following excellent libraries and code examples:

* **VESCtoUART:** [https://github.com/SolidGeek/VescUart](https://github.com/SolidGeek/VescUart) -  Provides a robust library for UART communication with VESC devices, simplifying data parsing and command sending.
* **SimpleKalmanFilter:** [https://github.com/denyssene/SimpleKalmanFilter/tree/master](https://github.com/denyssene/SimpleKalmanFilter/tree/master) - Implements a Kalman Filter for sensor data smoothing and noise reduction, potentially enhancing the accuracy of VESC data readings.
* **BLE WITH ESP32:** [https://github.com/A-Emile/VescBLEBridge](https://github.com/A-Emile/VescBLEBridge) -  Offers a foundation and inspiration for establishing Bluetooth Low Energy (BLE) communication between the ESP32 and other devices, potentially for VESC control or data logging.
* **VESC LCD EXAMPLE:** [https://github.com/TomStanton/VESC_LCD_EBIKE/tree/master](https://github.com/TomStanton/VESC_LCD_EBIKE/tree/master) - Provides valuable examples and insights into VESC data handling and display, which may be relevant for data processing and visualization in this project.

**Author:** Ruggero Cadamuro

**License:**

This project is licensed under the **MIT License**. See the `LICENSE` file for more details.

**Contact & Support:**

For any questions, issues, or support related to this project, you can contact me via WhatsApp: [http://wa.link/jsfvei](http://wa.link/jsfvei)

---

