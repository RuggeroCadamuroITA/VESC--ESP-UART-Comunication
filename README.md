# Progetto Interfaccia Arduino Pro Micro per VESC (UART) & Bluetooth (ESP32 C3)

Questo repository contiene il codice sviluppato da Ruggero Cadamuro per utilizzare un **Arduino Pro Micro** (basato sul microcontrollore ATmega32u4) come interfaccia tra un **qualsiasi Controller Elettronico di Velocità (VESC) compatibile con UART** e un modulo **ESP32 C3** per la comunicazione Bluetooth.

L'obiettivo è leggere i dati dal VESC, elaborarli potenzialmente sull'Arduino e renderli disponibili tramite Bluetooth per il monitoraggio, la registrazione o il controllo remoto.

## Caratteristiche Principali:

*   🔌 **Comunicazione Seriale Hardware con VESC:** Utilizza la porta UART hardware (TX/RX) dell'Arduino Pro Micro per comunicare con il VESC. Ciò permette lo scambio di dati in tempo reale (telemetria) e l'invio di comandi al controller. Compatibile con qualsiasi VESC che esponga un'interfaccia UART.
*   📡 **Connettività Bluetooth via ESP32 C3:** Integra un modulo ESP32 C3, collegato all'Arduino (tipicamente via seriale software o I2C, a seconda dell'implementazione), per gestire la comunicazione Bluetooth (BLE). Questo apre possibilità per il monitoraggio wireless dei dati VESC tramite app su smartphone, data logging remoto o persino l'invio di comandi base.
*   💡 **Flessibilità:** Progettato per essere adattabile a diversi modelli di VESC che utilizzano il protocollo di comunicazione UART standard.

## Librerie e Codici di Riferimento Utilizzati:

Questo progetto si basa sulle seguenti eccellenti librerie ed esempi di codice:

*   **VescUart:** [https://github.com/SolidGeek/VescUart](https://github.com/SolidGeek/VescUart) - Una libreria fondamentale e robusta per la comunicazione UART con dispositivi VESC. Semplifica notevolmente il parsing dei pacchetti di dati telemetrici e l'invio dei comandi.
*   **SimpleKalmanFilter:** [https://github.com/denyssene/SimpleKalmanFilter/tree/master](https://github.com/denyssene/SimpleKalmanFilter/tree/master) - Implementa un Filtro di Kalman semplice ed efficace, utile per "lisciare" i dati provenienti dai sensori (come letture di corrente o velocità) e ridurre il rumore, migliorando potenzialmente l'affidabilità delle letture.
*   **VescBLEBridge (Ispirazione BLE):** [https://github.com/A-Emile/VescBLEBridge](https://github.com/A-Emile/VescBLEBridge) - Codice che è servito come base d'ispirazione per implementare la comunicazione Bluetooth Low Energy (BLE) tramite l'ESP32, mostrando come fare da ponte tra la seriale VESC e il BLE.
*   **VESC LCD EXAMPLE (Esempio Gestione Dati):** [https://github.com/TomStanton/VESC_LCD_EBIKE/tree/master](https://github.com/TomStanton/VESC_LCD_EBIKE/tree/master) - Fornisce esempi pratici e spunti preziosi su come richiedere, interpretare e visualizzare i dati provenienti da un VESC, utili per elaborare le informazioni sull'Arduino.

## Ringraziamenti: 🙏

Desidero esprimere la mia sincera gratitudine agli autori e ai contributori delle librerie e dei codebase menzionati qui sopra, senza i quali questo progetto non sarebbe stato possibile:

*   **VescUart:** Grazie a **SolidGeek** per lo sviluppo e la manutenzione della libreria VescUart. Questa libreria è stata determinante nel semplificare il complesso compito della comunicazione UART con i controller VESC ed è stata una pietra angolare di questo progetto.
*   **SimpleKalmanFilter:** Molte grazie a **denyssene** per aver creato la libreria SimpleKalmanFilter. Questa implementazione efficiente e facile da usare del Filtro di Kalman è stata preziosa per migliorare potenzialmente l'accuratezza e la stabilità dei dati dei sensori all'interno di questo progetto.
*   **VescBLEBridge:** Estendo il mio apprezzamento ad **A-Emile** per il codice VescBLEBridge. Questo progetto ha fornito un'ispirazione cruciale e un punto di partenza per implementare la comunicazione Bluetooth Low Energy, guidando lo sviluppo della funzionalità Bluetooth in questo progetto.
*   **VESC LCD EXAMPLE:** Grazie a **TomStanton** per il codice VESC LCD EXAMPLE. Questo esempio ha fornito spunti preziosi e una guida pratica sulla gestione e la visualizzazione dei dati VESC, che è stata molto utile per comprendere le strutture dati e le tecniche di elaborazione del VESC.

Il vostro lavoro è molto apprezzato dalla comunità open-source e ha facilitato in modo significativo lo sviluppo di questo progetto.

**Autore:** Ruggero Cadamuro

## Licenza: 📝

Questo progetto è rilasciato sotto la **Licenza MIT**. Vedi il file `LICENSE` per maggiori dettagli.

## Contatti e Supporto: 📞

Per qualsiasi domanda, problema o supporto relativo a questo progetto, puoi contattarmi tramite WhatsApp: [http://wa.link/jsfvei](http://wa.link/jsfvei)