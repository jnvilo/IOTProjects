#include <Arduino.h>
#define GREENLED 13
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println("Start");

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(GREENLED,LOW);
  Serial.println("The green led is off");
  delay(1000);
  digitalWrite(GREENLED,HIGH);
  Serial.println("The greed led is on");
  delay(1000);
}