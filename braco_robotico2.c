#include <Servo.h>

Servo s1_base, s2_left, s3_right, s4_garra;

void setup() {
    s1_base.attach(10);
    s2_left.attach(12);
    s3_right.attach(11);
    s4_garra.attach(13);
    Serial.begin(9600);
}

void loop() {
    int posicao; // Declare a variável

    // Posição Inicial
    s1_base.write(0);
    s2_left.write(23);
    s3_right.write(0);
    s4_garra.write(37);

    delay(500);
  
    // Primeira posição - Garra abrindo
    for (posicao = 37; posicao <= 110; posicao += 5) {
        s4_garra.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Segunda Posição - Motor Direito vai levantar o braço
    for (posicao = 0; posicao >= 47; posicao -= 1) {
        s3_right.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Terceira posição - Garra fechando no objeto
    for (posicao = 110; posicao >= 79; posicao -= 1) {
        s4_garra.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);
    //  - Motor Direito volta um pouco pra ficar melhor
    for (posicao = 47; posicao >= 25; posicao -= 1) {
        s3_right.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);
    // Quarta Posição - Motor Esquerdo levanta o braço
    for (posicao = 23; posicao <= 110; posicao += 1) {
        s2_left.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(3000);
    
    // Quinta Posição - Motor base gira 90 graus
    for (posicao = 0; posicao <= 105; posicao += 1) {
        s1_base.write(posicao);
        delay(20); // Ajuste o valor do atraso conforme necessário
    }
    delay(3000);
    //  - Motor Direito volta um pouco pra ficar melhor
    for (posicao = 25; posicao <= 0; posicao -= 1) {
        s3_right.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Sexta posição - Garra deixando o objeto
    for (posicao = 79; posicao >= 35; posicao -= 1) {
        s4_garra.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(3000); 

    //Voltando para a posição Inicial 

    //  - Motor Direito vem um pouco pra ficar melhor
    for (posicao = 0; posicao >= 47; posicao += 1) {
        s3_right.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Setima Posição - Motor base gira -90 graus (voltando)
    for (posicao = 105; posicao >= 0; posicao -= 1) {
        s1_base.write(posicao);
        delay(20); // Ajuste o valor do atraso conforme necessário
    }
    delay(3000);

    // Oitava Posição - Motor Direito abaixa o braço
    for (posicao = 110; posicao >= 25; posicao -= 1) {
        s2_left.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(3000);

    // Nona Posição - Motor Direito vai voltar o braço
    for (posicao = 47; posicao >= 0; posicao -= 1) {
        s3_right.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(1000);

    // Décima Posição - Garra fechada
    for (posicao = 35; posicao <= 79; posicao += 1) {
        s4_garra.write(posicao);
        delay(10); // Ajuste o valor do atraso conforme necessário
    }
    delay(10000); 
    
    //Fim da Execução
}