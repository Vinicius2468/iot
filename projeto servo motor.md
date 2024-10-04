# Projeto servomotor

# Introdução
Este projeto serve para girar o microservo de forma ordenada usando botões, ao apertar os botões 
voçê pode girar o microservo para o lado que voçê quiser.
- Microservo pode girar de 0  até 180°
- Ao apertar o botão pode ser girado para a esquerda ou para direita.

 # Material

 - 1 Microservo
 - 2 Botões
 - 2 Resistores

  # Código

biblioteca do servo motor
#include <Servo.h>
criando objeto do tipo servo motorpara poder usar as
funcões de controle do equipamento (servo motor)
Servo objetoservo;
variavel para salvar a porta que o servo está
int servo = 2 ;
variavel para a porta do botão
int botao = 4 ;
variavel para a porta do botão 02
int botaovoltar = 7 ;
variavel para a posicão do motor
int posicao = 0;
int posicaoo = 180;
void setup()
{
  objetoservo.attach(servo);
  pinMode(botaovoltar,INPUT);
  //botão começa no 0
  objetoservo.write(0);
  //inicializando o servo na porta digital 2
  objetoservo.attach(servo);
  //definir botão como entrada
  pinMode (botao,INPUT);
}

void loop()
{
  SE O BOTÃO FOR PRECIONADO E POSIÇÃO DO SERVO MOTOR ESTIVER
  MENOR QUE 180°
  esse botão vai de 0 ate 180
  if(digitalRead(botao)== HIGH && posicao<180 ){
  ENTÃO AUMENTE 1 POSICÃO
  posicao++;
  MANDE O MOTOR PARA A NOVA POSIÇÃO
    objetoservo.write(posicao);
    AQUARDE 1 SEGUNDO PARA A PROXIMA LEITURA
    delay(1000);   
  }
  esse botão vai de 180 ate 0
     if(digitalRead(botaovoltar)== HIGH && posicao>0 ){ENTÃO AUMENTE 1 POSICÃO
  posicao--;
  MANDE O MOTOR PARA A NOVA POSIÇÃO
    objetoservo.write(posicao);
   AQUARDE 1 SEGUNDO PARA A PROXIMA LEITURA
    delay(1000);
     }
  }
  
  
