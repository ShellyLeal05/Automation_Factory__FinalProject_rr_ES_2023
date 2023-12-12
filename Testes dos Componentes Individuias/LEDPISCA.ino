
void setup() 
{
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
}

void loop() {

  digitalWrite (13, HIGH);
  digitalWrite (12, LOW);
  delay(100);
  digitalWrite (12, HIGH);
  digitalWrite (13, LOW);
  delay(100);


}
