#include <Servo.h>

// CRIAÇÃO DO OBJETO SERVO MOTOR
Servo objetoservo;

// Definição dos pinos
int led = 2;       // LED vermelho
int servo = 4;   // Pino do servo motor
 int posicao = 0;

long distancia(int trigger, int echo){
//TRIGGER PORTA DE SAIDA
  pinMode(trigger,OUTPUT);
  digitalWrite(trigger,LOW);
  delay(5);//espere 5 milisegundos.
  //mandando sinal 
  digitalWrite(trigger,HIGH);
  delay(10);
  digitalWrite(trigger,LOW);
  //echo porta de entrada
  pinMode(echo,INPUT);
  //RETORNA OD DADOS QUE A PORTA RECEBE 
 return pulseIn(echo,HIGH);
  

}

void setup() {
  // Configuração do LED
  pinMode(led, OUTPUT);   // Define o pino do LED vermelho como saída
  
  
  objetoservo.attach(servo);
 
  objetoservo.write(posicao);            // Posição inicial do servo: 0 graus

}

void loop() {
int cm = 0.01723 * distancia (7,3);
if(cm<45){
  digitalWrite(led, HIGH);
	posicao = posicao +10;// PODE SER USADO TAMBEM posicao ++10
    objetoservo.write(posicao);
    delay(100); // Atras
}else{
	digitalWrite(led, LOW);
}
}
