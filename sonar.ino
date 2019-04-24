#include <NewPing.h>

#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 30

NewPing sonar (TRIGGER_PIN , ECHO_PIN, MAX_DISTANCE); 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(50);
Serial.print(sonar.ping_cm());
Serial.println("cm");
if (sonar.ping_cm() <=5) {
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
}
delay(50);
if (sonar.ping_cm() >=11) {
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);  
}
}
