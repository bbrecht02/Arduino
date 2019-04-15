// set variables 
const int estado = 0; // variável para leitura do pushbutton
const int guarda_estado = LOW; // variável para armazenar valores do pushbutton

 
void setup() {
// define o pino do Led como saída do Arduino
pinMode(9, OUTPUT);
// define pino do pushbutton como entrada do Arduino:
pinMode(2, INPUT);
}
 
void loop(){
// le o estado pushbutton: ligado (HIGH) ou desligado (LOW)
estado = digitalRead(2);
 
// verifica se o botão (pushbutton) está pressionado
if (estado == HIGH) {
// inverte valor da variável variable_buttonEstado
guarda_estado = !guarda_estado;
//esperera o tempo de 500ms para evitar que haja várias vezes alterações
delay(500);
}
 
if (guarda_estado == HIGH) {
// liga o led
digitalWrite(9, HIGH);
}
else {
// desliga o led
digitalWrite(9, LOW);
}
} 
