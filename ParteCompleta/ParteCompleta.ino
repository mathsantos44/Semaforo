/*
 * Autor: Matheus Oliveira dos Santos
 * Projeto: Semáforo
 * Data: 25/05/2021
 * Parte 2
 */

/*
 * Nessa parte terá o projeto inteiro
 */

#define led1verm 2
#define led1amar 3
#define led1verd 4
#define led2verm 5
#define led2amar 6
#define led2verd 7
#define led3verm 8
#define led3amar 9
#define led3verd 10
#define led4verm 11
#define led4amar 12
#define led4verd 13
#define ledped1verd 23
#define ledped1verm 24
#define ledped2verd 25
#define ledped2verm 26

#define botao 22

int leds[16] = {2,3,4,5,6,7,8,9,10,11,12,13,23,24,25,26};

unsigned long tempo, tempoinicial, tempoatual;

int estadobotao, anteriorbotao, fase = 1, bot = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i <= 15; i++) {
    pinMode(leds[i], OUTPUT);
    Serial.println(i);
  }
  
  tempoinicial = millis();

  anteriorbotao = digitalRead(botao);

  digitalWrite(led1verm, LOW);
  digitalWrite(led1verd, HIGH);
  digitalWrite(led1amar, LOW);
  digitalWrite(led2verm, HIGH);
  digitalWrite(led2verd, LOW);
  digitalWrite(led2amar, LOW);
  digitalWrite(led3verd, LOW);
  digitalWrite(led3verm, HIGH);
  digitalWrite(led3amar, LOW);
  digitalWrite(led4verd, LOW);
  digitalWrite(led4verm, HIGH);
  digitalWrite(led4amar, LOW);
  digitalWrite(ledped1verd, LOW);
  digitalWrite(ledped1verm, HIGH);
  digitalWrite(ledped2verd, LOW);
  digitalWrite(ledped2verm, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  estadobotao = digitalRead(botao);
  tempoatual = millis();
  tempo = tempoatual - tempoinicial;
<<<<<<< HEAD
  if ((tempo < 5000) && (fase == 1)) { //Verde (1), Amarelo (), Vermelho(2, 3, 4)
=======
  if ((tempo > 5000) && (fase == 1)) { //Verde (1), Amarelo (), Vermelho(2, 3, 4)
>>>>>>> parte2
    digitalWrite(led1verm, LOW);
    digitalWrite(led1verd, HIGH);
    digitalWrite(led1amar, LOW);
    digitalWrite(led2verm, HIGH);
    digitalWrite(led2verd, LOW);
    digitalWrite(led2amar, LOW);
    digitalWrite(led3verd, LOW);
    digitalWrite(led3verm, HIGH);
    digitalWrite(led3amar, LOW);
    digitalWrite(led4verd, LOW);
    digitalWrite(led4verm, HIGH);
    digitalWrite(led4amar, LOW);
    digitalWrite(ledped1verd, LOW);
    digitalWrite(ledped1verm, HIGH);
    digitalWrite(ledped2verd, LOW);
    digitalWrite(ledped2verm, HIGH);

    fase = 2;
  }

<<<<<<< HEAD
  if ((tempo < 8000) && (fase == 2)) { //Verde (), Amarelo (1), Vermelho (2, 3, 4)
=======
  if ((tempo > 8000) && (fase == 2)) { //Verde (), Amarelo (1), Vermelho (2, 3, 4)
>>>>>>> parte2
    digitalWrite(led1verm, LOW);
    digitalWrite(led1verd, LOW);
    digitalWrite(led1amar, HIGH);
    digitalWrite(led2verm, HIGH);
    digitalWrite(led2verd, LOW);
    digitalWrite(led2amar, LOW);
    digitalWrite(led3verd, LOW);
    digitalWrite(led3verm, HIGH);
    digitalWrite(led3amar, LOW);
    digitalWrite(led4verd, LOW);
    digitalWrite(led4verm, HIGH);
    digitalWrite(led4amar, LOW);
    digitalWrite(ledped1verd, LOW);
    digitalWrite(ledped1verm, HIGH);
    digitalWrite(ledped2verd, LOW);
    digitalWrite(ledped2verm, HIGH);

    fase = 3;
  }

<<<<<<< HEAD
  if ((tempo < 13000) && (fase == 3)) { //Verde(2), Amarelo(), Vermelho(1, 3, 4)
=======
  if ((tempo > 13000) && (fase == 3)) { //Verde(2), Amarelo(), Vermelho(1, 3, 4)
>>>>>>> parte2
    digitalWrite(led1verm, HIGH);
    digitalWrite(led1verd, LOW);
    digitalWrite(led1amar, LOW);
    digitalWrite(led2verm, LOW);
    digitalWrite(led2verd, HIGH);
    digitalWrite(led2amar, LOW);
    digitalWrite(led3verd, LOW);
    digitalWrite(led3verm, HIGH);
    digitalWrite(led3amar, LOW);
    digitalWrite(led4verd, LOW);
    digitalWrite(led4verm, HIGH);
    digitalWrite(led4amar, LOW);
    digitalWrite(ledped1verd, LOW);
    digitalWrite(ledped1verm, HIGH);
    digitalWrite(ledped2verd, LOW);
    digitalWrite(ledped2verm, HIGH);

    fase = 4;
  }
  if ((tempo < 16000) && (fase == 4)) { //Verde(), Amarelo (2), Vermelho(1, 3, 4)
    digitalWrite(led1verm, HIGH);
    digitalWrite(led1verd, LOW);
    digitalWrite(led1amar, LOW);
    digitalWrite(led2verm, LOW);
    digitalWrite(led2verd, LOW);
    digitalWrite(led2amar, HIGH);
    digitalWrite(led3verd, LOW);
    digitalWrite(led3verm, HIGH);
    digitalWrite(led3amar, LOW);
    digitalWrite(led4verd, LOW);
    digitalWrite(led4verm, HIGH);
    digitalWrite(led4amar, LOW);
    digitalWrite(ledped1verd, LOW);
    digitalWrite(ledped1verm, HIGH);
    digitalWrite(ledped2verd, LOW);
    digitalWrite(ledped2verm, HIGH);

    fase = 5;
  }

  if ((tempo < 21000) && (fase == 5)) { //Verde(3), Amarelo(), Vermelho(1, 2, 4)
    digitalWrite(led1verm, HIGH);
    digitalWrite(led1verd, LOW);
    digitalWrite(led1amar, LOW);
    digitalWrite(led2verm, HIGH);
    digitalWrite(led2verd, LOW);
    digitalWrite(led2amar, LOW);
    digitalWrite(led3verd, HIGH);
    digitalWrite(led3verm, LOW);
    digitalWrite(led3amar, LOW);
    digitalWrite(led4verd, LOW);
    digitalWrite(led4verm, HIGH);
    digitalWrite(led4amar, LOW);
    digitalWrite(ledped1verd, LOW);
    digitalWrite(ledped1verm, HIGH);
    digitalWrite(ledped2verd, LOW);
    digitalWrite(ledped2verm, HIGH);

    fase = 6;
  }

  if ((tempo < 24000) && (fase == 6)) { //Verde(), Amarelo(3), Vermelho(1, 2, 4)
    digitalWrite(led1verm, HIGH);
    digitalWrite(led1verd, LOW);
    digitalWrite(led1amar, LOW);
    digitalWrite(led2verm, HIGH);
    digitalWrite(led2verd, LOW);
    digitalWrite(led2amar, LOW);
    digitalWrite(led3verd, LOW);
    digitalWrite(led3verm, LOW);
    digitalWrite(led3amar, HIGH);
    digitalWrite(led4verd, LOW);
    digitalWrite(led4verm, HIGH);
    digitalWrite(led4amar, LOW);
    digitalWrite(ledped1verd, LOW);
    digitalWrite(ledped1verm, HIGH);
    digitalWrite(ledped2verd, LOW);
    digitalWrite(ledped2verm, HIGH);

    fase = 7;
  }
}
