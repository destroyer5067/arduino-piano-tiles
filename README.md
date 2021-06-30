# ***PIANO TILES BOT***
( A project under **ROBOTICS CLUB MNNIT ALLAHABAD** )

## **TEAM NAME - "BOT LOVERS"**

## **TEAM DETAILS-**

1.AYUSH KANODIA (LEADER)
20195078 - ECE (2ND YEAR)

2.SATYAM RAJ 
20195067 - ECE (2ND YEAR)

## **PROBLEM STATEMENT**

Build a bot using arduino uno which can play the famous mobile game piano tiles

## **TECH STACK**

1. Arduino Uno, Arduino IDE



## ***ABOUT PIANO TiLES BOT***

Ever wondered if your phone can play games by itself.
Yes, it is possible. You can build a circuit to play Piano tiles on your smartphone.

## ***Step 1: Components Required-:***
  -LDR,Arduino Uno, Servo Motor,BreadBoard,Connecting Wires
  
## ***Step 2: Detecting the colour of the current tile on the screen-:***
  -We use light dependent resistors (LDRs) to sense if the tiles are white or black. 
  -Four LDRs are positioned over the screen each facing one tile.
  -The LDR resistance changes with the intensity of Light. Higher the intensity of light, lesser the resistance.
  -LDR is placed in a Voltage divider circuit to produce a voltage proportional to its resistance.
  -The LDRs are connected to the analog input pins of the Arduino
  
## ***Step 3: Processing the LDR readings-:***
 -Arduino reads the voltage drop across the LDR.
 -Observe the voltage voltages for Black and White tiles, choose a suitable threshold voltage say Vt.
 -Accordingly we set the values for Servo Motors
 
## ***Step 4: Simulating the touch on the screen (Most Important)-:***
-For this we have to understand how capacitive touch screens work. 
-The electrodes apply a low voltage to the conductive layer creating a uniform electrostatic field. 
-When a finger hits the screen a tiny electrical charge is transferred to the finger to complete the circuit creating a voltage drop at that point on the screen. 
-The location of this voltage drop is recorded by the controller and this is how a capacitive touch screen works.

We are going to use the same concept, except that in the place of a finger, we use the ground pin on the arduino to transfer the charge on the screen. To have more surface area on the display of the screen, we use virtual touch pad using a pen cap and a wet cotton.

***To run the project on your system-:***

- Clone the repo on to your system.
- Add all the requirements to your system as like the ide and all the libraries.
- open your arduino ide and connect your bot to it and see it functioning.
 
### ***Thank You for your valuable time.***
