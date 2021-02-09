int vermelho=9;
int verde=10;
int azul=11;
int loki= A0;
int lokivalor=0;
void setup() {
  // put your setup code here, to run once:
pinMode(vermelho, OUTPUT);
pinMode(verde,OUTPUT);
pinMode(azul, OUTPUT);
pinMode(loki, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lokivalor= analogRead(loki);
Serial.println(lokivalor);
if (lokivalor>=400){
digitalWrite(vermelho, HIGH);
digitalWrite(verde, LOW);
digitalWrite(azul, LOW); 
}
if (lokivalor<200 && lokivalor>=100) {
digitalWrite(vermelho, LOW);
digitalWrite(verde, HIGH);
digitalWrite(azul, LOW); 
}
if ( lokivalor<100) {
digitalWrite(vermelho, LOW);
digitalWrite(verde, LOW);
digitalWrite(azul, HIGH); 
}
}
