#Projeto tela LCD com sensor de Distância

Este projeto foi desenvolvido dentro do Tinkercard, na disciplina na Internet das coisas
(IOT), para a criação de um prototipo com arduino que simule uma mensagem de Mantenha
distância toda vez que alguem se aproxima a menos de 1 metro do sensor.



##Componentes Usados
-1 Arduino
-1 Placa de Ensaio
-1 Sensor de Distância
-1 Tela LCD 16x2
-14 Jumpers Macho-Macho
-3 Jumpers Macho-Fêmea
-1 Resistor de 1 K0hms 

## Montagem do Circuito
![Imagem do circuito](TELALCD.png)

## Explicação do Código

Importando a biblioteca do LCD
#Include <LiquidCrystal.h> 
Criando variavel do lcd
LiquidCrystal lcd (2,3,4,9,10,11,12);
UInt ledLcd = 13;
void setup()
{
PinMode(ledLcd,OUTPUT);  DEFINIR LEDLCD SAIDA
DigitalWrite(ledLcd, HIGH);  ligar os LEDs do LCD
Lcd.begin(16,2);  informar que o lcd tem 16 colunas e 2 linhas
Lcd.clear();  iniciar o lcd limpo
}
void loop()
{
Lcd.setCursor(0,0);  iniciar a escrita na linha 0 coluna 0
Lcd.print("Ola Mundo");
Lcd.setCursor(0,1);  iniciar a escrita na linha 0 coluna 0
Lcd.print("Bom dia!");
}

Metodo para inicializar as portas de conexão do lcd, e as configurações iniciais.

void setup()
{
pinMod(ledLcd,OUTPUT);
gigitalWrite(ledlcd,HIGH);
led.begin(16,2);
lcd.clear();
}
Metodo para executar ifinitamente o código de convesão de distancia para cn, e impresão das mensagems de "Mantenha a Distância".
void loop(
{
int cn = 0.01723 * distancia (8, 8);

if (cn>100){
lcd.setCursor(0.0);
