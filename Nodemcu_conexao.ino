#include <ESP8266WIFI>.h
 
// Insira sua rede e sua senha

    const char* nome = "nome da rede";
    const char* senha = "senha da rede";     
 
    int wifiStatus;
 
    void setup() {
 
      Serial.begin(115200);
      delay(200);
 
 
      // Fazendo a conexão
 
      Serial.print("Iniciando a conexão da rede!");
      Serial.println(nome);
 
      WiFi.begin(nome, senha);
 
      while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
      }
 
 }   
 
void loop() {
      wifiStatus = WiFi.status();

      if(wifiStatus == WL_CONNECTED){
         Serial.println("Uhulllllllll... O nodeMCU esta conectado!");  
         Serial.print("O IP utilizado na conexão é: ");
         Serial.println(WiFi.localIP()); 
        }  
      else{
         Serial.println("Ahhhhhhhhhhh...O nodeMCU não esta conectado!");
      }
      delay(1000); 
 
}
