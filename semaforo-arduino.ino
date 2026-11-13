// Semáforo — versão 1
const int VERMELHO = 12;
const int AMARELO = 11;
const int VERDE = 10;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  digitalWrite(VERDE, HIGH); // fase verde: carros seguem
  delay(4000);
  digitalWrite(VERDE, LOW);

  digitalWrite(AMARELO, HIGH); // fase amarela: atenção, carros reduzem
  delay(2000);
  digitalWrite(AMARELO, LOW);

  digitalWrite(VERMELHO, HIGH); // fase vermelha: carros param
  delay(5000);
  digitalWrite(VERMELHO, LOW);
}
