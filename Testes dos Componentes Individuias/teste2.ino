// Código usado para testar a angulação individual de cada motor, de modo que eu setava a posição e observava como o motor se comportava.

#include <Servo.h>

Servo meuServo;  // Cria um objeto Servo para controlar um servo motor

int anguloInicial = 0;   // Ângulo inicial do servo motor
int anguloFinal = 47;     // Ângulo final do servo motor
int incremento = 1;       // Valor do incremento para o movimento do servo

void setup() {
  meuServo.attach(9);  // O pino de controle do servo motor está conectado ao pino digital 9
}

void loop() {
  moverServo(anguloInicial, anguloFinal, incremento);
  delay(1000);  // Aguarda por um segundo
  while (true) {
    // Fica em um loop infinito após realizar o movimento
  }
}

void moverServo(int inicio, int fim, int incremento) {
  for (int i = inicio; i <= fim; i += incremento) {
    meuServo.write(i);
    delay(15);  // Aguarda um curto período para o servo atingir a posição desejada
  }
}

