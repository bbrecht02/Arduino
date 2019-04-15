int verde= 8;
int amarelo= 9;
int vermelho= 10;
void setup() {
  // put your setup code here, to run once:
pinMode(verde, OUTPUT);
pinMode(amarelo, OUTPUT);
pinMode(vermelho, OUTPUT);
pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
bool botao= digitalRead(2);
if (botao== LOW) {
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
  delay(1000);
}
if (botao== HIGH) {
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
  delay(1000);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(1000);
}
}
