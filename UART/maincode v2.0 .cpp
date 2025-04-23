// codice di Ruggero Cadamuro per arduino pro micro con ATMEGA32u, comunicazione UART TX RX harware serial con FLIPSKY 75100 (probabilmemte qualsiasi Vesc)

#include <VescUart.h>

/** Initiate VescUart class */
VescUart UART;
float voltage;
float current;
float wattage;
float watthours;
float ah;
float erpm;
float rpm;
float batt;
float distance;
float DR;

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
    voltage= (UART.data.inpVoltage); // voltaggio batteria
    ah= (UART.data.ampHours);        // amper ora
    current= (UART.data.avgInputCurrent);  //corrente attuale
    wattage= voltage*current;  // watt attuali
    watthours= ah*voltage;     // watt ora
    erpm=(UART.data.rpm);      // erpm del vesc
    rpm= erpm / (46/2);  //motor poles diviso 2
    batt = (((voltage/20)-3.4)/0.8)*100; // calcolo percentuale batteria con 3.4v da scarica 
    distance = rpm*3.142*(1.0/1000)*DR*1; // calcolo distanza ???  
    velocity = rpm*3.142*(60.0/1000)*DR*1; // calcolo velocità, in caso di problemi controlla rpm
  }
  else
  {
    Serial.println("User check the connections, comunication failed");
  }

  delay(50);
}
