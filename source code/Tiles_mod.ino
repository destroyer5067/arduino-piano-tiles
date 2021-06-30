# include <Servo.h>


Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

int r1;
int r2;
int r3;
int r4;
int ldr = 450;
void setup()
{
  Serial.begin(9600);
  motor1.attach(2);
  motor2.attach(3);
  motor3.attach(4);
  motor4.attach(5);
}

int delay1 = 150;
int delay2 = 150;

int count = 0;

void loop() {


  motor1.write(90);
  motor2.write(90);
  motor3.write(85);
  motor4.write(85);

  delay(500);


  r1 = analogRead(A1);
  r2 = analogRead(A3);
  r3 = analogRead(A4);
  r4 = analogRead(A5);


  if (r1 > ldr || r2 > ldr || r3 > ldr || r4 > ldr)
  {
    count = count + 1;
  }


  if (count > 297)
  {
    delay1 = 120;
    delay2 = 150;
  }

  if (count > 590)
  {
    delay1 = 100;
    delay2 = 130;
  }

  if (r1 > ldr||1)
  {
    delay(delay1);
    motor1.write(90);
    delay(delay2);
  }

  if (r2 > ldr||1)
  {
    delay(delay1);
    motor2.write(150);
    delay(delay2);
  }

  if (r3 > ldr||1)
  {
    delay(delay1);
    motor3.write(150);
    delay(delay2);
  }

  if (r4 > ldr||1)
  {
    delay(delay1);
    motor4.write(150);
    delay(delay2);
  }





  Serial.print("r1: ");
  Serial.print(r1);
  Serial.print("r2: ");
  Serial.print(r2);
  Serial.print(", r3: ");
  Serial.print(r3);
  Serial.print(", r4: ");
  Serial.println(r4);
  Serial.println(count);
}
