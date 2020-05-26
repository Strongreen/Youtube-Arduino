#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

// Insira sua rede e sua senha

const char* nome = "Sua rede";
const char* senha = "sua senha";

// Configurado na porta 80

ESP8266WebServer server(80);

int wifiStatus;
String textoHTML;

// Envia o texto para o server

void handleRoot() {
textoHTML = "Webserver com NodeMCU, contemplem meu Heeello Word.... Muhahahahhaha";
server.send(200, "text/html", textoHTML);
}

// Tratativas de erro

void handleNotFound(){
String message = "Arquivo não foi encontrado \n\n";
message += "URI: ";
message += server.uri();
message += "\n Método: ";
message += (server.method() == HTTP_GET)?"GET":"POST";
message += "\n Argumentos: ";
message += server.args();
message += "\n";
for (uint8_t i=0; i<server.args(); i++){
message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
}
server.send(404, "text/plain", message);
}

void setup(void){

Serial.begin(115200);
delay(200);

//Fazendo a conexão
Serial.print("Iniciando a conexão da rede! ");
Serial.println(nome);
WiFi.begin(nome, senha);

// Aguardando pela conexão
while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.print(".");
}

// WiFi.mode(WIFI_STA);

// Fazendo a conexão

wifiStatus = WiFi.status();

if( wifiStatus == WL_CONNECTED){
Serial.println("Uhullllllll.... O nodeMCU esta conectado! ");
Serial.print("O IP utilizado na conexão é: ");
Serial.println(WiFi.localIP());
Serial.println("");
}
else {
Serial.println("Ahhhhhhhhhh... O nodeMCU não esta conectado!");
}
delay(1000);

// Enviando o texto HTML para o server

// Primeira opção

server.on("/", handleRoot);

// Segunda opção
server.on("/inline", {
server.send(200, "text/plain", "2 opção de envio");
});

// Caso ocorra um erro, (tratativas do erro)

server.onNotFound(handleNotFound);

//Inicia o server

server.begin();
Serial.println("HTTP server iniciado");
}

void loop(void){

// Deixa o server em loop, assim se houver alguma mudança nas informações, ele atualiza
server.handleClient();
}
