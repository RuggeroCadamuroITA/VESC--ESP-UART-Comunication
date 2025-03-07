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

**Acknowledgements:**

I would like to express my sincere gratitude to the authors and contributors of the following libraries and codebases, without whom this project would not have been possible:

* **VESCtoUART:**  Thank you to **SolidGeek** for developing and maintaining the VESCtoUART library. This library has been instrumental in simplifying the complex task of UART communication with VESC controllers and has been a cornerstone of this project.
* **SimpleKalmanFilter:**  Many thanks to **denyssene** for creating the SimpleKalmanFilter library.  This efficient and easy-to-use Kalman Filter implementation has been invaluable for potentially improving the accuracy and stability of sensor data within this project.
* **BLE WITH ESP32:**  I extend my appreciation to **A-Emile** for the BLE WITH ESP32 codebase. This project provided crucial inspiration and a starting point for implementing Bluetooth Low Energy communication, guiding the development of the Bluetooth functionality in this project.
* **VESC LCD EXAMPLE:**  Thank you to **TomStanton** for the VESC LCD EXAMPLE code. This example provided valuable insights and practical guidance on handling and displaying VESC data, which has been very helpful in understanding VESC data structures and processing techniques.

Your work is greatly appreciated by the open-source community and has significantly facilitated the development of this project.

**Author:** Ruggero Cadamuro

**License:**

This project is licensed under the **MIT License**. See the `LICENSE` file for more details.

**Contact & Support:**

For any questions, issues, or support related to this project, you can contact me via WhatsApp: [http://wa.link/jsfvei](http://wa.link/jsfvei)
