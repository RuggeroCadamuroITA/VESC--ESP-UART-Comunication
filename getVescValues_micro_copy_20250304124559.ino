// codice di Ruggero Cadamuro per arduino pro micro con ATMEGA32u, comunicazione UART TX RX harware serial con FLIPSKY 75100

#include <VescUart.h>

/** Initiate VescUart class */
VescUart UART;
float voltage;
float current;
float wattage;

void setup() {

  /** Setup Serial port to display data */
  Serial.begin(9600);

  /** Setup UART port (Serial1 on Atmega32u4) */
  Serial1.begin(19200);
  
  while (!Serial) {;}

  /** Define which ports to use as UART */
  UART.setSerialPort(&Serial1);
}

void loop() {
  
  /** Call the function getVescValues() to acquire data from VESC */
  if ( UART.getVescValues() ) {
    voltage= (UART.data.inpVoltage);
    current= (UART.data.avgInputCurrent);
    wattage= voltage*current;
    Serial.println(UART.data.rpm);
    Serial.println(UART.data.inpVoltage);
    Serial.println(UART.data.ampHours);
    Serial.println(UART.data.tachometerAbs);
    Serial.println(UART.data.avgInputCurrent);
    Serial.println(wattage);
  }
  else
  {
    Serial.println("User check the connections, comunication failed");
  }

  delay(50);
}