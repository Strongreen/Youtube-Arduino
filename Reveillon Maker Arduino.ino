
int segE = 7;
int segD = 8;
int segC = 9;
int segB = 13;
int segA = 12;
int segF = 11;
int segG = 10;

int led1 = 6;
int led2 = 5;
int led3 = 3;

void setup() {

pinMode(segE, OUTPUT);
pinMode(segD, OUTPUT);
pinMode(segC, OUTPUT);
pinMode(segB, OUTPUT);
pinMode(segA, OUTPUT);
pinMode(segF, OUTPUT);
pinMode(segG, OUTPUT);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);

}

void loop() {
 acende9();
 delay(1500);
 acende8();
 delay(1500);
 acende7();
 delay(1500);
 acende6();
 delay(1500);
 acende5();
 delay(1500);
 acende4();
 delay(1500);
 acende3();
 delay(1500);
 acende2();
 delay(1500);
 acende1();
 delay(1500);
 // Essa parte pode ser feita com um For
 Led();
 delay(100);
 acende0();
 delay(100);
 Led();
 delay(1000);
 Led();
 delay(100);
 acendeX();
 delay(100);
 Led();
 delay(100);
 acende0();
 delay(100);
 Led();
 delay(1000);
 Led();
 delay(100);
 // Até aqui ( fica aí o desafio)
 acendeX();
 delay(1000);
 Led();
 delay(100);
 Final();
}

void Final(){
 analogWrite(led1, random(120)+136);
 analogWrite(led2, random(120)+136);
 analogWrite(led3, random(120)+136);
 acende0();
 delay(1000);
 analogWrite(led1, LOW);
 analogWrite(led1, random(120)+136);
 analogWrite(led2, LOW);
 analogWrite(led2, random(120)+136);
 analogWrite(led3, LOW);
 analogWrite(led3, random(120)+136);
 delay(3000);
 analogWrite(led1, LOW);
 analogWrite(led2, LOW);
 analogWrite(led3, LOW);
 }


void Led(){
  analogWrite(led1, random(120)+136);
  delay(50);
  analogWrite(led1,LOW);  
  delay(50);
  analogWrite(led2, random(120)+136);
  delay(50);
  analogWrite(led2,LOW);  
  delay(50);
  analogWrite(led3, random(120)+136);
  delay(50);
  analogWrite(led3,LOW);  
  }

void acendeX()
{
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);  
}

void acende0(){
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  }
void acende1(){
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  }
void acende2(){
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
  }

void acende3(){
  digitalWrite(segE, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
  }

void acende4(){
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  }

void acende5(){
  digitalWrite(segE, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  }

void acende6(){
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  }

void acende7(){
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  }

  void acende8(){
  digitalWrite(segE, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  }

  void acende9(){
  digitalWrite(segE, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  }
  
  
