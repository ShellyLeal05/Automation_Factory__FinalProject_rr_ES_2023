#include <Servo.h>

Servo s1_base, s2_left, s3_right, s4_garra;

void setup() {
    s1_base.attach(4);
    s2_left.attach(3);
    s3_right.attach(2);
    s4_garra.attach(5);
    Serial.begin(9600);
}

void loop() {
    int posicao; // Declare a variável

    // Posição Inicial
    s1_base.write(0);
    s2_left.write(47);
    s3_right.write(0);
    s4_garra.write(37);

    delay(500);
  // Primeira posição - Garra abrindo
    for (posicao = 37; posicao <= 79; posicao += 5) {
        s4_garra.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Segunda Posição - Motor Direito vai levantar o braço
    for (posicao = 47; posicao <= 110; posicao += 1) {
        s2_left.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Terceira Posição - Motor base gira 90 graus
    for (posicao = 0; posicao <= 95; posicao += 1) {
        s1_base.write(posicao);
        delay(20); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Quarta Posição - Garra fechando
    for (posicao = 79; posicao >= 37; posicao -= 1) {
        s4_garra.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Agora o motor precisa voltar com o objeto, faremos a volta 

    // Quinta Posição - Motor base gira -90 graus
    for (posicao = 95; posicao >= 0; posicao -= 1) {
        s1_base.write(posicao);
        delay(20); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Sexta Posição - Motor Direito vai abaixar o braço
    for (posicao = 110; posicao >= 55; posicao -= 1) {
        s2_left.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Setima posição - Seria o motor Direito inclinando o objeto
    for (posicao = 0; posicao <= 25; posicao += 1) {
        s3_right.write(posicao);
        delay(20); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Oitava Posição - Garra abrindo e deixando o Objeto 
    for (posicao = 0; posicao <= 79; posicao += 1) {
        s4_garra.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }

    // Encerra o ciclo e depois de alguns segundos começa novamente
    delay(10000);
}