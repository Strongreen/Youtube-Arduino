/* IR SENSOR READER PRINTS HEX TO SERIAL
SEE SETUP DIAGRAM https://lh3.googleusercontent.com/_c7i7thfRFZ4/TWYQBVvPuSI/AAAAAAAAAEA/s3mklBlFaT8/s800/decodew.jpg
 ___
|( )|  PIN 1 = SIGNAL TO ARDUINO PWM PIN 11
|___|  PIN 2 = GND
| | |  PIN 3 = 3V3
| | |
1 2 3
Arduino 1.0 IRremote lib at http://www.arcfn.com/2010/11/irremote-library-now-runs-on-teensy.html
(requires "#include <WProgram.h>" changing to "#include <Arduino.h>" in IRremoteInt.h)
Sample code at http://www.arcfn.com/2009/08/multi-protocol-infrared-remote-library.html
*/

#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
}


