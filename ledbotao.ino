const int led= 9;
const int botao= 2; 
int estadobotao= 1;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  estadobotao=digitalRead(botao);
 if (estadobotao==LOW) {
 digitalWrite(led, HIGH);
 } else {                        
  digitalWrite(led, LOW);    
 }        
}
