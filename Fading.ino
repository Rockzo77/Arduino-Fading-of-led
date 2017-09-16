/*
 Fading

 This example shows how to fade an LED using the analogWrite() function.


 */


int ledPin = 9;    // LED connected to digital pin 9

void setup() {
  pinMode(ledPin,OUTPUT); // assigning pin 9 for Output
  
}

void loop() {
  // fade in from min to max in increments of 5 points:
  // for( int counter=initial desired value;counter = desired final value; increment)
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5)
  {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the glowing effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5)
  {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}


