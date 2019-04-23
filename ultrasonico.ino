#include <Ultrasonic.h>

Ultrasonic  utrasonic(10,9);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("dados sensor:");
}

void loop() {
  // put your main code here, to run repeatedly:
//LEITURA
float cmMsec, inMsec;
long mocrosec = ultrasonic.timing();
cmMsec= ultrasonic.convert(microsec, Ultrasonic::CM;
inMsec= ultrasonic.convert(microsec, Ultrasonic::IN;
//EXIBIÇÃO
Serial.print("distancia cm: ");
Serial.print(cmMsec);
Serial.print(" Distancia em polegadas");
Serial.print(inMsec);
delay(1000);
}
