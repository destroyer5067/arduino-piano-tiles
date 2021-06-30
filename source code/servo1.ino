#include<Servo.h>
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
int x = 0;
void setup() {
  // put your setup code here, to run once:

  Servo1.attach(2);
  Servo2.attach(3);
  Servo3.attach(4);
  Servo4.attach(5);

}

void loop() {
  for (x = 15; x >= 0; x--)
  { Servo1.write(x);
    delay(5);
  }
  for (x = 0; x <= 15; x++)
  {
    Servo1.write(x);
    delay(5);
  }

  for (x = 0; x <= 25; x++)
  { Servo2.write(x);
    delay(5);
  }
  for (x = 25; x >= 0; x--)
  {
    Servo2.write(x);
    delay(5);
  }
  for (x = 25; x >= 0; x--)
  { Servo3.write(x);
    delay(5);
  }
  for (x = 0; x <=25; x++)
  {
    Servo3.write(x);
    delay(5);
  }
  for (x = 0; x <= 15; x++)
  { Servo4.write(x);
    delay(5);
  }
  for (x = 15; x >= 0; x--)
  {
    Servo4.write(x);
    delay(5);
  }
  // put your main code here, to run repeatedly:

}
