const int led1verm = 2;
const int led1amar = 3;
const int led1verd = 4;
const int led2verm = 5;
const int led2amar = 6;
const int led2verd = 7;
const int led3verm = 8;
const int led3amar = 9;
const int led3verd = 10;
const int led4verm = 11;
const int led4amar = 12;
const int led4verd = 13;
const int ped1verm = 22;
const int ped1verd = 23;
const int ped2verm = 24;
const int ped2verd = 53;
const int ped3verm = 26;
const int ped3verd = 27;
const int ped4verm = 28;
const int ped4verd = 29;

const int leds[20] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 22, 23, 24, 53, 26, 27, 28, 29};

unsigned long tempo, tempoatual, tempoinicial;

int fase = 1;

void ligarleds(int svm1, int sam1, int svd1, int svm2, int sam2, int svd2, int svm3, int sam3, int svd3, int svm4, int sam4, int svd4, int psvm1, int psvd1, int psvm2, int psvd2, int psvm3, int psvd3, int psvm4, int psvd4);

void setup() {
  Serial.begin(9600);
  for (int i = 0; i <= 19; i++) {
    pinMode(leds[i], OUTPUT);
    Serial.print(i);
    digitalWrite(leds[i], HIGH);
  }
  tempoinicial = millis();
}

void loop() {
  tempoatual = millis();
  tempo = tempoatual - tempoinicial;

  if ((tempo > 500)&&(fase == 1)) {
    ligarleds(0,0,1,1,0,0,1,0,0,1,0,0,1,0,1,0,1,0,1,0);

    fase = 2;
  }
  
  if ((tempo > 5000) && (fase == 2)) {
    ligarleds(0,1,0,1,0,0,1,0,0,1,0,0,1,0,1,0,1,0,1,0);

    fase = 3;
  }
  
  if ((tempo > 5500) && (fase == 3)) {
    ligarleds(1,0,0,0,0,1,1,0,0,1,0,0,1,0,1,0,1,0,1,0);

    fase = 4;
  }

  if ((tempo > 10500) && (fase == 4)) {
    ligarleds(1,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,1,0,1,0);

    fase = 5;
  }

  if ((tempo > 11000) && (fase == 5)) {
    ligarleds(1,0,0,1,0,0,0,0,1,1,0,0,1,0,1,0,1,0,1,0);

    fase = 6;
  }

  if ((tempo > 16000) && (fase == 6)) {
    ligarleds(1,0,0,1,0,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0);

    fase = 7;
  }

  if ((tempo > 16500) && (fase == 7)) {
    ligarleds(1,0,0,1,0,0,1,0,0,0,0,1,1,0,1,0,1,0,1,0);

    fase = 8;
  }

  if ((tempo > 21500) && (fase == 8)) {
    ligarleds(1,0,0,1,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0);

    tempoinicial = tempoatual;
    Serial.println("Fim do Programa");
    fase = 1;
  }
}

void ligarleds(int vm1, int am1, int vd1, int vm2, int am2, int vd2, int vm3, int am3, int vd3, int vm4, int am4, int vd4, int pvm1, int pvd1, int pvm2, int pvd2, int pvm3, int pvd3, int pvm4, int pvd4) {
  digitalWrite(led1verm, vm1);
  digitalWrite(led2verm, vm2);
  digitalWrite(led3verm, vm3);
  digitalWrite(led4verm, vm4); 
  digitalWrite(ped1verm, pvm1);
  digitalWrite(ped2verm, pvm2);
  digitalWrite(ped3verm, pvm3);
  digitalWrite(ped4verm, pvm4);
  digitalWrite(led1amar, am1);
  digitalWrite(led2amar, am2);
  digitalWrite(led3amar, am3);
  digitalWrite(led4amar, am4);
  digitalWrite(led1verd, vd1);
  digitalWrite(led2verd, vd2);
  digitalWrite(led3verd, vd3);
  digitalWrite(led4verd, vd4);
  digitalWrite(ped1verd, pvd1);
  digitalWrite(ped2verd, pvd2);
  digitalWrite(ped3verd, pvd3);
  digitalWrite(ped4verd, pvd4);
}
