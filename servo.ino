#include <NewPing.h>
#include <Servo.h>

#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 100

NewPing sonar (TRIGGER_PIN , ECHO_PIN, MAX_DISTANCE); 

Servo batata;
void setup() {
  // put your setup code here, to run once:
batata.attach(9);
Serial.begin(9600);
pinMode(6,OUTPUT);
pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(50);
Serial.print(sonar.ping_cm());
Serial.println("cm");
if (sonar.ping_cm() <= 2) {
  digitalWrite(6, HIGH);
  digitalWrite(7,HIGH);
}
delay(50);
if (sonar.ping_cm() >=11) {
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);  
  batata.write(10);
  delay(50);
  batata.write(180);
  delay(50);
  batata.write(360);
  delay(50);
}
}
