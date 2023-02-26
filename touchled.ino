const int pinoSensor = 2; //PINO DIGITAL UTILIZADO PELO SENSOR
const int pinoLed = 12; //PINO DIGITAL UTILIZADO PELO LED
 
void setup() {
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
}
 
void loop() {
  if (digitalRead(pinoSensor) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
    digitalWrite(pinoLed, HIGH); //ACENDE O LED
  }
  else{ //SENÃO, FAZ
    digitalWrite(pinoLed,LOW); //APAGA O LED
  } 
  delay(200); //INTERVALO DE 200 MILISSEGUNDOS
}
