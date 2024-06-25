#include <Servo.h>

Servo motor 1;

Servo motor_2;

Servo motor 3;

Servo motor 4:

Servo motor 5:

Servo motor_6;

#define enA Al //Enablel L298 Pin enA

#define in1 14//Motor1 L298 Pin inl

#define in2 15//Motor] L298 Pin inl

#define in3 16//Motor2 L298 Pin in1

#define in4 17//Motor2 L298 Pin inl

#define enB A2 //Enable2 L298 Pin enB

#define LED1 20

#define LED2 21

int servol 80;

int servo2 180;

int servo3 180;

int servo490;

int servo550;

int triggerPin = 18;
int echoPin = 19;

int bt_data;

int Speed 130;

void setup(){

Serial.begin(9600); // initialize serial communication at 9600 bits per second:

motor_1.attach(2);

motor_2.attach(3);

motor_3.attach(4);

motor_4.attach(5);

motor_5.attach(6);

motor_1.write(servol);

motor_2.write(servo2);

motor_3.write(servo3);

motor_4.write(servo4);

motor_5.write(servo5);

pinMode(enA, OUTPUT); // declare as output for L298 Pin enA pinMode(in1, OUTPUT); // declare as output for L298 Pin inl pinMode(in2, OUTPUT); // declare as output for L298 Pin in2 pinMode(in3, OUTPUT); // declare as output for L298 Pin in3 pinMode(in4, OUTPUT); // declare as output for L298 Pin in4 pinMode(enB, OUTPUT);

pinMode(LED1, OUTPUT);

pinMode(LED2, OUTPUT);// declare as output for L298 Pin enB

pinMode(triggerPin, OUTPUT);

pinMode(echoPin, INPUT);

digitalWrite(triggerPin, LOW);

delay(1000);

void loop(){

//if some date is sent, reads it and saves in state
if(Serial.available() > 0){ bt_data Serial.read(); Serial.println(bt_data); if(bt_data > 20){Speed = bt_data; }

analogWrite(enA, Speed); // Write The Duty Cycle 0 to 255 Enable Pin A for Motorl Speed analogWrite(enB, Speed); // Write The Duty Cycle 0 to 255 Enable Pin B for Motor2 Speed

long duration, distance;

digitalWrite(triggerPin, HIGH);

delayMicroseconds(10); digitalWrite(triggerPin, LOW);

duration pulseIn(echoPin, HIGH); distance duration 0.034/2;

if (distance <8) ( Stop(); LED_D3(): delay(500); backword(); LED_D1();

delay(500);

Stop();

LED_D2();

// Adjust this threshold according to your requirements }

// Delay after the sweep before checking for object again

if(bt_data 1) {forword(): LED_D1(); } // if the bt_data is 'I' the DC motor will go forward else if(bt_data 2) (backword(); LED_DI();} // if the bt_data is '2' the motor will Reverse

else if(bt_data3) (turnLeft(); LED_DI();} // if the bt_data is '3' the motor will turn left

else if(bt_data 4) (turnRight(); LED_D1();) // if the bt_data is '4' the motor will turn right

else if(bt_data=5)(Stop(); LED_D2(); // if the bt_data '5' the motor will Stop

else if(bt_data 6) (turnLeft(); delay(400); bt_data = 5;) else if(bt_data=7) (turnRight(); delay(400); bt_data = 5;)

else if (bt data = 8){ if(servol<180){servol servol+1;} motor_1.write(servol);

else if (bt_data = 9){ if(servo1>0)(servol = servol-1;) motor_1.write(servol);

else if (bt_data = 10){ if(servo2>0){servo2 = servo2-1;) motor_2.write(servo2):

}

else if (bt_data = 11){ if(servo2<180) (servo2 servo2+1;} motor_2.write(servo2); }

else if(bt_data = 12){ if(servo3>(0) (servo3 = servo3-1;) motor_3.write(servo3); }
else if (bt_data == 13){ if(servo3<180) (servo3 servo3+1;] motor_3.write(servo3);

else if (bt_data = 14){ if(servo4<180){servo4 = servo4+1;] motor_4.write(servo4);

else if(bt_data= 15){ if(servo4>0){servo4 = servo4-1;) motor_4.write(servo4); 1

else if (bt_data = 16){ if(servo5>10) servo5 = servo5-1;) motor_5.write(servo5);

}

else if (bt_data = 17)[ if(servo5<180) (servo5 servo5+1;} motor 5.write(servo5); }

delay(30); }

void forword(){ //forword digitalWrite(in1, LOW); //Right Motor forword Pin digitalWrite(in2, HIGH); //Right Motor backword Pin digitalWrite(in3, HIGH); //Left Motor backword Pin digitalWrite(in4, LOW); //Left Motor forword Pin

}

void backword(){//backword digitalWrite(in1, HIGH); //Right Motor forword Pin digitalWrite(in2, LOW); //Right Motor backword Pin digitalWrite(in3, LOW); //Left Motor backword Pin digitalWrite(in4, HIGH); //Left Motor forword Pin
void turnRight(){//turnRight

digitalWrite(in1, HIGH); //Right Motor forword Pin digitalWrite(in2, LOW); //Right Motor backword Pin. digitalWrite(in3, HIGH); //Left Motor backword Pin digitalWrite(in4, LOW); //Left Motor forword Pin

void turnLeft(){//turnLeft digitalWrite(in1, LOW); //Right Motor forword Pin

digitalWrite(in2, HIGH); //Right Motor backword Pin

digitalWrite(in3, LOW); //Left Motor backword Pin

digitalWrite(in4, HIGH); //Left Motor forword Pin

1

void Stop(){ //stop

digitalWrite(in1, LOW); //Right Motor forword Pin

digitalWrite(in2, LOW); //Right Motor backword Pin

digitalWrite(in3, LOW); //Left Motor backword Pin

digitalWrite(in4, LOW); //Left Motor forword Pin

void LED_DI()1//stop

digitalWrite(LED1, HIGH); //Right Motor forword Pin digitalWrite(LED2, HIGH); delay(500); digitalWrite(LEDI, LOW); //Right Motor forword Pin digitalWrite(LED2, LOW);//Right Motor backword Pin

void LED_D2(){ //stop digitalWrite(LED1, HIGH); //Right Motor forword Pin digitalWrite(LED2, LOW); delay(500);

digitalWrite(LED1, LOW); //Right Motor forword Pin
digitalWrite(LED2, HIGH);//Right Motor backword Pin

void LED_D3(){ //stop

digitalWrite(LEDI, LOW); //Right Motor forword Pin

digitalWrite(LED2, LOW);

delay(500);

digitalWrite(LED1, LOW); //Right Motor forword Pin

digitalWrite(LED2, LOW);//Right Motor backword Pin
