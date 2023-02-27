const byte ledVermelho = 12;
const byte pinoPIR = 2; 
 
void setup(){
  Serial.begin(115200);
  pinMode(ledVermelho,OUTPUT);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
}
 
void loop(){ 
if (digitalRead(pinoPIR) == HIGH){
  Serial.println("Entrou!");
  digitalWrite(ledVermelho, HIGH);
  delay(5000);
  digitalWrite(ledVermelho, LOW);
}
delay(500);
}
