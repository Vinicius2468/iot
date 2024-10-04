# Sensor de Umidade

# Introdução
Este código e para seber a temperatura da umidade do solo, usando o sensor de temperatura para saber se 
o solo esta seco, ideal, ou umido.

# Material
- 1 arduino 
- 1 sensor de umidade

  # Código
  BIBLIOTECA PARA CONEXÃO SERIAO DO SENSOR	
#include <SoftwareSerial.h>
int sensor = A0;


void setup()
{    
  DEFINIR O SENSOR COMO ENRADA
  pinMode(sensor,INPUT);
   INICIALIZANDO O MUNITOR SERIAL
  Serial.begin(9600);
    
}

void loop()
{
GUADAR O VALOR LIDO PELO SENSOR
  int umidade = analogRead(sensor);
  Serial.print("Umidade do solo:" );
  	Serial.println(umidade);
  delay(600);
  
  
  if(umidade<300){
      Serial.println("Umidade do seco:" );
  }
    if(umidade>300 && umidade<500){
      Serial.println("Umidade do ideal:" );
}
    if(umidade>500){
      Serial.println("Umidade do umido:" );
    }
}

![titulo da imagem](foto3Sensordeumidade.png)
