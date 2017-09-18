/* Keyes Infrared Transmitter Module (KY-005) [S015] : http://rdiot.tistory.com/161 [RDIoT Demo] */

#include <IRremote.h>
//* An IR LED must be connected to Arduino PWM pin 3.
IRsend irsend;
 
void setup()
{
}
 
void loop() {
 
  int khz = 38; // 38kHz carrier frequency for the NEC protocol
  //  unsigned int irSignal[] = {9000, 4500, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 560, 560, 560, 560, 560, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 560, 560, 1690, 560, 1690, 560, 1690, 560, 1690, 560, 39416, 9000, 2210, 560}; //AnalysIR Batch Export (IRremote) - RAW
  
  unsigned int  rawData[67] = {4500,4400, 600,1650, 550,1650, 650,1600, 600,550, 550,550, 550,550, 550,550, 550,550, 550,1650, 600,1650, 550,1650, 600,550, 550,550, 550,550, 550,550, 550,550, 600,500, 600,1600, 600,550, 550,550, 550,550, 550,550, 550,550, 550,550, 600,1600, 600,550, 550,1650, 600,1650, 550,1650, 600,1650, 600,1650, 550,1650, 600};  // SAMSUNG E0E040BF
  unsigned int  data = 0xE0E040BF;
 
  irsend.sendRaw(rawData, sizeof(rawData) / sizeof(rawData[0]), khz); //Note the approach used to automatically calculate the size of the array.
 
  delay(5000); //In this example, the signal will be repeated every 5 seconds, approximately.
}
