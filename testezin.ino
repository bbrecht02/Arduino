int verde= 9;
int amarelo= 8;
int vermelho= 10;
void setup() {
pinMode(verde, OUTPUT);
pinMode(amarelo, OUTPUT);
pinMode(vermelho,OUTPUT);
pinMode(3, INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
bool botao= digitalRead(3);
if (botao== HIGH){
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
  Serial.println(botao);
}
if (botao== LOW){
  delay(1000);
  digitalWrite(verde, LOW);
  delay(1000);
  digitalWrite(amarelo, HIGH);
  delay(500);
  digitalWrite(amarelo, LOW);
  delay(500);
  digitalWrite(vermelho, HIGH);
  delay(1000);
}
}
