int trig = 10;
int echo = 9;
long micro, cm;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Inicializando o sensor
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  // Enviando o sinal por 10 microssegundos
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // Lendo o tempo de viagem da onda em microssegundos
  micro = pulseIn(echo, HIGH);

  // Transformando em centímetros
  cm = micro / 58;

  Serial.println(cm);
}
