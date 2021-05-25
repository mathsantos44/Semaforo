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

#define sem1verm 2 //Led vermelho do semáforo 1
#define sem1amar 3 //Led amarelo do semáforo 1
#define sem1verd 4 //Led verde do semáforo 1

unsigned long tempo1, tempo2, tempo3, tempoinicial1, tempoinicial2, tempoinicial3, tempoatual;

int fase; //Variável que indica o que está acontecendo com os Leds para o microcontrolador

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 2; i <= 4; i++) { //Comando de repetição pra colocar os pinos dos Leds como Saída
    pinMode(i, OUTPUT);
    Serial.println(i);
  }
  tempoinicial = millis(); //Fazer o set do tempo inicial

  fase = 1;
}

void loop() {
  tempoatual = millis(); //Variável designada para trocar o comando millis por outra coisa
  tempo1 = tempoatual-tempoinicial1;
  tempo2 = tempoatual-tempoinicial2;
  tempo3 = tempoatual- 

  if ((tempo > 5000) && (fase == 1)) {
    digitalWrite(sem1verm, LOW);
    digitalWrite(sem1verd, HIGH);
    digitalWrite(sem1amar, LOW);

    fase = 2;
  }

  if ((tempo > 8000) && (fase == 2)) {
    digitalWrite(sem1verm, LOW);
    digitalWrite(sem1verd, LOW);
    digitalWrite(sem1amar, HIGH);

    fase = 3;
  }

  if ((tempo > 13000) && (fase == 3)) {
    digitalWrite(sem1verm, HIGH);
    digitalWrite(sem1verd, LOW);
    digitalWrite(sem1amar, LOW);

    tempoinicial = millis();
    fase = 1;
  }
}
