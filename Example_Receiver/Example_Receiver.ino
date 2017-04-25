#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include "Keyboard.h"

RF24 radio(7, 8);

const byte rxAddr[6] = "00001";

void setup()
{
  while (!Serial);
  Serial.begin(9600);
  
  radio.begin();
  radio.openReadingPipe(0, rxAddr);
  
  radio.startListening();
}

void loop()
{
  if (radio.available())
  {
    char text[32] = {0};
    radio.read(&text, sizeof(text));
    Serial.print(text);
    if(text[0] == 'a')
    {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(KEY_DELETE);
      delay(100);
      Keyboard.releaseAll();
      //ALT-l:
      delay(2000);
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press('3');
      Keyboard.releaseAll();
    }
  }
}
