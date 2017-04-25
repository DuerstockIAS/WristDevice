#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);

const byte rxAddr[6] = "00001";

void setup()
{
  radio.begin();
  Serial.begin(9600);
  
  radio.setRetries(15, 15);
  radio.openWritingPipe(rxAddr);
  
  radio.stopListening();
}

void loop()
{
  if(Serial.available() > 0)
  { 
  const a = Serial.read();
  radio.write(&a, 1);
  }
  delay(1000);
}
