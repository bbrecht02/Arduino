int verde= 9;
int amarelo= 8;
int vermelho= 10;
void setup() {
  // put your setup code here, to run once:
pinMode(verde,OUTPUT);
pinMode(amarelo,OUTPUT);
pinMode(vermelho,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(verde,HIGH);
delay(55);
Serial.println("VERDE");
digitalWrite(verde,LOW);
delay(55);
digitalWrite(amarelo,HIGH);
delay(55);
Serial.println("AMARELO");
digitalWrite(amarelo,LOW);
delay(55);
digitalWrite(vermelho,HIGH);
delay(55);
Serial.println("VERMELHO");
digitalWrite(vermelho,LOW);
}
