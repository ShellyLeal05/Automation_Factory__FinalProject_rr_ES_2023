#include <Servo.h>

/*#define pot1 A0
#define pot2 A1
#define pot3 A2
#define pot4 A3*/

Servo s1, s2, s3, s4;

//int angS1, angS2, angS3, angS4;
int tmp = 2500;

void setup(){
    s1.attach(2);
    s2.attach(3);
    s3.attach(4);
    s4.attach(5);
    Serial.begin(9600);
}

void loop(){
  p1();
  delay(tmp);
  p2();
  delay(tmp);
  p3();
  delay(tmp);
  p4();
  delay(tmp);
  p5();
  delay(tmp);
  p6();
  delay(tmp);
  p7();
  delay(tmp);

  delay(100);

}

/*void servoPos{
    Serial.println("-----");
    Serial.print(s1.read());
    Serial.println(" - ");
    Serial.print(s2.read());
    Serial.println(" - ");
    Serial.print(s3.read());
    Serial.println(" - ");
    Serial.print(s4.read());
    Serial.println("-----");
No Servo Motor: 
110 equivale a 120 graus
79 equivale a 90 graus 
47 equivale a 60 graus

} */

void p1(){ // padrao - garra fechada
    s1.write(0);
    s2.write(167);
    s3.write(79);
    s4.write(97);  
}

void p2(){ // padrao - garra aberta
    s1.write(180);
    s2.write(140);
    s3.write(74);
    s4.write(97);   
}

void p3(){ 
    s1.write(180);
    s2.write(0);
    s3.write(118);
    s4.write(97);
}

void p4(){ 
    s1.write(0);
    s2.write(145);
    s3.write(110);
    s4.write(97);
}

void p5(){ 
    s1.write(0);
    s2.write(180);
    s3.write(79);
    s4.write(178);
}

void p6(){ 
    s1.write(0); 
    s2.write(167);
    s3.write(47);
    s4.write(178);
}

void p7(){ 
    s1.write(180);
    s2.write(111);
    s3.write(118);
    s4.write(178);
}