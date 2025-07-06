// LEDs
#define LED_VERMELHO 10
#define LED_AMARELO 9
#define LED_VERDE 8

// Botão
#define BOTAO 12

// Estados
#define LIGADO 1
#define DESLIGADO 0

void setup() {
  // Configura LEDs como saída
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);

  // Configura botão como entrada
  pinMode(BOTAO, INPUT);
}

void loop() {
  // Inicialmente: verde ligado
  digitalWrite(LED_VERDE, LIGADO);
  digitalWrite(LED_AMARELO, DESLIGADO);
  digitalWrite(LED_VERMELHO, DESLIGADO);
  
  // Lê o botão (pressionado = 1)
  if (digitalRead(BOTAO) == LIGADO) {
    // Troca para amarelo
    digitalWrite(LED_VERDE, DESLIGADO);
    digitalWrite(LED_AMARELO, LIGADO);
    delay(2000);

    // Troca para vermelho
    digitalWrite(LED_AMARELO, DESLIGADO);
    digitalWrite(LED_VERMELHO, LIGADO);
    delay(5000);

    // Volta para o verde
    digitalWrite(LED_VERMELHO, DESLIGADO);
    digitalWrite(LED_VERDE, LIGADO);
  }
}
