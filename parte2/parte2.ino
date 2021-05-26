/*
 * Autor: Matheus Oliveira dos Santos
 * Data: 26/05/2021
 * Parte 2
 */

const int led1verm = 2, led1amar = 3, led1verd = 4, ledped1verm = 5, ledped1verd = 6, botao = 7;

unsigned long tempo, tempoatual, tempoinicial;

int estadobotao, anteriorbotao, bot = 0, fase = 1;

void setup() {
  Serial.begin(9600);
  for (int i = 2; i <= 6; i++) {
    pinMode(i, OUTPUT);
    Serial.println(i);
    digitalWrite(i, HIGH);
  }
  pinMode(botao, INPUT);

  anteriorbotao = digitalRead(botao);

  
  tempoinicial = millis();
}

void loop() {
  tempoatual = millis();
  tempo = tempoatual - tempoinicial;
  if ((tempo > 5000) && (fase == 1)) {
    void leds(0, 0, 1, 1, 0);
    fase = 2;
  }

  if ((tempo > 10000) && (fase == 2)) {
    void leds(0, 1, 0, 1, 0, 1);
    fase = 3;
  }
  
  if ((tempo > 13000) && (fase == 3)) {
    void leds(1, 0, 0, 1, 0);

    fase = 4;
  }
  if (fase == 4) {
    if (bot == 1) {
      void leds(1, 0, 0, 0, 1);

      delay(3000);

      tempoinicial = tempoatual;
      fase = 1;
    }
    else {
      tempoinicial = tempoatual;
      fase = 1;
    }
  }
}

void leds(boolean vm1, boolean am1, boolean vd1, boolean pvm1, boolean pvd1) {
    digitalWrite(led1verm, vm1);
    digitalWrite(led1amar, am1);
    digitalWrite(led1verd, vd1);
    digitalWrite(ledped1verm, pvm1);
    digitalWrite(ledped1verd, pvd1);
}
