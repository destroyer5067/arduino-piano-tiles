# include <Servo.h>
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
int r1;
int r2;
int r3;
int r4;
int ldr = 280;
int x;
void setup()
{
  Serial.begin(9600);
  Servo1.attach(2);
  Servo2.attach(3);
  Servo3.attach(4);
  Servo4.attach(5);
}

int delay1 = 150;
int delay2 = 150;

int count = 0;

void loop() {
  r1 = analogRead(A1);
  r2 = analogRead(A2);
  r3 = analogRead(A3);
  r4 = analogRead(A4);


  if (r1 < ldr || r2 <ldr || r3 < ldr || r4 <ldr)
  {
    count = count + 1;
  }


  if (count > 25)
  {
    delay1 = 10;
    delay2 = 20;
  }

  if (count > 50)
  {
    delay1=5;
    delay2=10;
  }

{  if (r1 < ldr)
  {
  { Servo1.write(x);
    delay(5);
  }
  for (x = 0; x <= 20; x++)
  {
    Servo1.write(x);
    delay(5);
  }
  }

  if (r2 < ldr)
  {
    { Servo2.write(x);
    delay(5);
  }
  for (x = 0; x <= 20; x++)
  {
    Servo2.write(x);
    delay(5);
  }
  }

  if (r3 < ldr)
  {
    { Servo3.write(x);
    delay(5);
  }
  for (x = 0; x <= 20; x++)
  {
    Servo3.write(x);
    delay(5);
  }
  }

  if (r4< ldr)
   {
   { Servo4.write(x);
    delay(5);
  }
  for (x = 0; x <= 20; x++)
  {
    Servo4.write(x);
    delay(5);
  }
   }
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
