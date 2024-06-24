#include <Arduino.h>
#include <Wire.h>
#include <radio.h>
#include <TEA5767.h>
#include <SI4703.h>

void connectToHouseAP() {

}

void setupADC() {

}


void getForeignRadios(int frequency) {

}

void getLocalRadios(int frequency) {

}

void getFM(int frequency) {

}


void setup() {
  Serial.begin(57600);
  Serial.println("Radio...");
  delay(200);
  connectToHouseAP();
  setupADC();
}

void loop() {
  int antennaLevel, volumeLevel, highLevel, lowLevel; // From internal ADC or ADS111x
  bool isOn, isWebradios, isBT, isSmallList, isBigList, isFM;
    
  if (isOn) {
    if (isWebradios) {
      //TODO: P2 
      //getWebradio(antennaLevel);
    } else if (isBT) {
      //TODO: P3
    } else if (isSmallList) {
      // P1
      getForeignRadios(antennaLevel);
    } else if (isBigList) {
      // P1
      getLocalRadios(antennaLevel);
    } else if (isFM) {
      // P0
      getFM(antennaLevel);
    }
  }
}
