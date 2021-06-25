#include <IRremote.h>

int RECV_PIN = 12;

IRrecv irrecv(RECV_PIN);

decode_results results;

IRsend irsend;

int botaoLiga = 4;
int botaoDesligar = 5;
int botaoGreen = 6;
int botaoBlue = 7;
int botaoRed = 8;

void setup()
{
  Serial.begin(9600);
  digitalWrite(botaoLiga, INPUT_PULLUP);
  digitalWrite(botaoDesligar, INPUT_PULLUP);
  digitalWrite(botaoBlue , INPUT_PULLUP);
  digitalWrite(botaoGreen, INPUT_PULLUP);
  digitalWrite(botaoRed , INPUT_PULLUP);
  //irrecv.enableIRIn();
  
}
  
void loop() {

    if(digitalRead(botaoLiga) == LOW){
       irsend.sendNEC(0xF7C03F, 32);
       irsend.sendNEC(0xFFE01F, 32);
       Serial.println("Ligar");
    
    }
    
    if(digitalRead(botaoDesligar) == LOW){
       irsend.sendNEC(0xF740BF, 32);
       irsend.sendNEC(0xFF609F, 32);
       Serial.println("Desligar");
    
    }
    
      if(digitalRead(botaoGreen) == LOW){
       irsend.sendNEC(0xF7A05F, 32);
       irsend.sendNEC(0xFF10EF, 32); 
       Serial.println("Troca para Verde");
    
    }
    
     if(digitalRead(botaoBlue) == LOW){
       irsend.sendNEC(0xF7609F, 32);
       irsend.sendNEC(0xFF50AF, 32); 
       Serial.println("Troca para azul");
    
    }

    if(digitalRead(botaoRed) == LOW){
       irsend.sendNEC(0xF720DF, 32);
       irsend.sendNEC(0xFF906F, 32); 
       Serial.println("Troca para vermelho");
    
    }
     if (irrecv.decode(&results)) {
        Serial.println(results.value, HEX);
        Serial.println(results.decode_type);
        irrecv.resume();
      }

}
