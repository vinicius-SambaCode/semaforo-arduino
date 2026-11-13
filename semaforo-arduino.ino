// Semáforo — versão 2
// Melhoria: semáforo de pedestres sincronizado e tempos em constantes.
// Carros:    vermelho (pino 12), amarelo (pino 11), verde (pino 10)
// Pedestres: vermelho (pino 9),  verde (pino 8)
// Cada LED está ligado ao GND por um resistor de 220 Ω.

const int VERMELHO = 12;
const int AMARELO = 11;
const int VERDE = 10;
const int PED_VERMELHO = 9;
const int PED_VERDE = 8;

// Tempos de cada fase, em milissegundos (fáceis de ajustar em um só lugar)
const unsigned long TEMPO_VERDE = 4000;     // carros seguem
const unsigned long TEMPO_AMARELO = 2000;   // atenção: carros reduzem
const unsigned long TEMPO_VERMELHO = 5000;  // carros param, pedestres atravessam

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(PED_VERMELHO, OUTPUT);
  pinMode(PED_VERDE, OUTPUT);
}

void loop() {
  // Fase verde: carros seguem e pedestres aguardam
  digitalWrite(PED_VERDE, LOW);
  digitalWrite(PED_VERMELHO, HIGH);
  digitalWrite(VERDE, HIGH);
  delay(TEMPO_VERDE);
  digitalWrite(VERDE, LOW);

  // Fase amarela: carros reduzem e pedestres continuam aguardando
  digitalWrite(AMARELO, HIGH);
  delay(TEMPO_AMARELO);
  digitalWrite(AMARELO, LOW);

  // Fase vermelha: carros param e o verde dos pedestres acende
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(PED_VERMELHO, LOW);
  digitalWrite(PED_VERDE, HIGH);
  delay(TEMPO_VERMELHO);
  digitalWrite(VERMELHO, LOW);
}
