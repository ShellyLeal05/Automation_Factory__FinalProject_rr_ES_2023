// Define os números dos pinos do sensor ultrassônico.
const int trigPin = 9;
const int echoPin = 10;

// Define o número do pino do motor.
const int motor = 2;

// Declaração de variáveis.
long duration;
int distance;

void setup() {
  // Configura o pino trigPin como saída.
  pinMode(trigPin, OUTPUT);
  
  // Configura o pino echoPin como entrada.
  pinMode(echoPin, INPUT);
  
  // Configura o pino do motor como saída.
  pinMode(motor, OUTPUT);

  // Inicia a comunicação serial com uma taxa de 9600 baud.
  Serial.begin(9600);
}

void loop() {
  // Limpa o pino trigPin.
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Configura o pino trigPin em estado HIGH por 10 microssegundos.
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Lê o pino echoPin, retorna o tempo de viagem da onda sonora em microssegundos.
  duration = pulseIn(
    echoPin, HIGH);
  
  // Calcula a distância em centímetros.
  distance = duration * 0.034 / 2;
  
  // Imprime a distância no Monitor Serial.
  Serial.print("Distância: ");
  Serial.println(distance);
  
  // Se a distância for menor que 10 centímetros, liga o motor.
  if (distance < 10) {
    digitalWrite(motor, HIGH);  // Liga o motor se o objeto estiver próximo.
  } else {
    digitalWrite(motor, LOW);  // Desliga o motor se o objeto estiver distante.
  }
}





