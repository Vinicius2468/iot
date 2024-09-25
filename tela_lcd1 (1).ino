// biblioteca do LCD
#include <LiquidCrystal.h> 
// criar variavel do lcd
LiquidCrystal lcd (2,3,4,9,10,11,12);
int ledLcd =13;

void setup()
{
  pinMode(ledLcd,OUTPUT); // DEFINIR LEDLCD SAIDA
  digitalWrite(ledLcd, HIGH); // ligar os LEDs do LCD
  lcd.begin(16,2); // informar que o lcd tem 16 colunas e 2 linhas
  lcd.clear(); // iniciar o lcd limpo
  
}

void loop()
{
  lcd.setCursor(0,0); // iniciar a escrita na linha 0 coluna 0
  lcd.print("Ola Mundo");
  lcd.setCursor(0,1); // iniciar a escrita na linha 0 coluna 0
  lcd.print("Bom dia!");
  
}