/*
 * Autor: Matheus Oliveira dos Santos
 * Data: 20/05/2021
 * Projeto: Semáforo
 */

/* Algoritmo
 * Enquanto 1 semáforo estiver aberto, todos os outros tem que estar fechados pra não ocorrer colisão
 * O semáforo de pedestre só poderá ser aberto após o funcionamento de todos
 * Cada semáforo ficará 5 segundo no verde e 3 no amarelo
 * O semáforo de pedestre poderá ser ativo somente quando o botão for ativo, caso contrario, ele não será aberto
 * Essa parte somente farei o funcionamento de um semáforo
 * Não poderá ser utilizado o comando Delay durante a troca de sinalizações pra não ocorrer erros e o usuário não ser reconhecido
 */

#define sem1verm 2
#define sem1amar 3
#define sem1verd 4

unsigned long delay1 = 0;
unsigned long delay2 = 0;
unsigned long delay3 = 0;

const int tempoVerde = 5000;
const int tempoAmar = 2000;

int fase;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 2; i <= 4; i++) {
    pinMode(i, OUTPUT);
    Serial.println(i);

    delay1 = millis();

    fase = 1;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if (fase == 1) {
    delay1 = millis();
    digitalWrite(sem1verm, LOW);
    digitalWrite(sem1amar, LOW);
    digitalWrite(sem1verd, HIGH);
    
    if ((millis() - dalay1) > tempoVerde) {
      fase = 2;
    }
  }
}
