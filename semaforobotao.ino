const byte ledVermelho = 4;
const byte ledVerde = 5;
const byte ledAmarelo = 6;
const byte chave = 7;

boolean estadoCorrente = LOW;
boolean estadoAnterior=LOW;
//boolean ledOn = false;

void setup() {
  pinMode(ledVermelho,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(chave,INPUT_PULLUP);
}

void loop() {
  digitalWrite(ledVermelho,LOW);
  digitalWrite(ledVerde,HIGH);
  
  estadoCorrente = debounce(estadoAnterior);
  
  if (estadoAnterior==LOW && estadoCorrente==HIGH && digitalRead(ledVerde)==HIGH){
    //ledOn = !ledOn;   
    delay(1000);
    
    digitalWrite(ledVerde,HIGH);
    digitalWrite(ledAmarelo,HIGH);
    delay(500);
    
    digitalWrite(ledVermelho,HIGH);
    digitalWrite(ledAmarelo,LOW);
    digitalWrite(ledVerde,LOW); 
    delay(1000); 
  }
  estadoAnterior = estadoCorrente;
}


boolean debounce(boolean estadoAnterior){
 
  boolean corrente = digitalRead(chave);
    
   if( estadoAnterior!= corrente){
     delay(5); 
     corrente =  digitalRead(chave);   
   }  
  return corrente;
}
