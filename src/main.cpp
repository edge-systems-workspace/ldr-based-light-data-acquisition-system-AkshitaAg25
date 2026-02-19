#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author AkshitaAg25
 * @date 2026-02-19
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define LDR analog pin (Use A0)
int ldrPin=A0;
 // TODO 2:
 // Create variable to store sensor reading
int reading=0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("Light Intensity Monitoring System Initialized");
}

void loop() {

    // TODO 5:
    // Read analog value from LDR
    reading= analogRead(ldrPin);

    // TODO 6:
    // Print raw ADC value
    Serial.println("Raw ADC Value: " + String(reading));

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)
    if(reading>500){
        Serial.println("Brightness Status: Bright");
    }
    else{
        Serial.println("Brightness Status: Dark");
    }

    // TODO 8:
    // Print brightness status
    Serial.print("Brightness Status: ");
    if(reading>500){
        Serial.println("Bright");
    }
    else{
        Serial.println("Dark");
    }
    // TODO 9:
    // Add delay (500ms or 1 second)
       delay(1000);
}
