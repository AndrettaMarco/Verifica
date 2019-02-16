int rosso = 12;
int giallo = 6;
int bianco = 8;
int verde = 10;

int ciclo;
int numrandom1;
int numrandom2;

void setup() {
  // put your setup code here, to run once:

pinMode (rosso, OUTPUT);
pinMode (giallo, OUTPUT);
pinMode (bianco, OUTPUT);
pinMode (verde, OUTPUT);

Serial.begin(9600);
randomSeed(analogRead(0));


}

void loop() {
  // put your main code here, to run repeatedly:

//Numero di volte che il ciclo ricominci
Serial.println("Dopo quante volte il ciclo deve ricominciare???");
while(Serial.available() == 0){}
ciclo= Serial.readString().toInt();
Serial.println(ciclo);


Serial.println("Durata led rosso e giallo");
while(Serial.available() == 0){}
numrandom1= random(500, 10000);
Serial.readString();
Serial.println(numrandom1);

Serial.println("Durata led bianco e verde");
while(Serial.available() == 0){}
numrandom2= random(500, 10000);
Serial.readString();
Serial.println(numrandom2);

for(int i=0 ;i<ciclo;i++){ 
//ROSSO E GIALLO
digitalWrite(rosso, HIGH);
digitalWrite(giallo, HIGH);
delay(numrandom1);
digitalWrite(rosso, LOW);
digitalWrite(giallo, LOW);

//BIANCO E VERDE
digitalWrite(bianco, HIGH);
digitalWrite(verde,HIGH);
delay(numrandom2);
digitalWrite(bianco, LOW);
digitalWrite(verde, LOW);
}
setup();
}
