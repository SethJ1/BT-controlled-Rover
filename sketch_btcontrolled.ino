#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <Dabble.h>

const int buzzer = 10;
/*int in1 = 2; 
int in2 = 4;
int enA = 3;

int in3 = 5;
int in4 = 7;
int enB = 6; 
*/
int enableRightMotor=3; 
int rightMotorPin1=2;
int rightMotorPin2=4;

//Left motor
int enableLeftMotor=6;
int leftMotorPin1=5;
int leftMotorPin2=7;
void setup()
{
  /*pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  digitalWrite(in1, LOW); //Move Forwards 1.5s
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(1500);

  digitalWrite(in1, LOW); //Stop 0.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(500);

  digitalWrite(in1, HIGH); //Move Backwards 1.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(1500);

  digitalWrite(in1, LOW); //Stop 0.5s
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(500);
  */

  pinMode(buzzer, OUTPUT);
  
  pinMode(enableRightMotor,OUTPUT);
  pinMode(rightMotorPin1,OUTPUT);
  pinMode(rightMotorPin2,OUTPUT);
  
  pinMode(enableLeftMotor,OUTPUT);
  pinMode(leftMotorPin1,OUTPUT);
  pinMode(leftMotorPin2,OUTPUT);

  rotateMotor(0,0);   
    
  Dabble.begin(9600, 8, 9);
  
}

void loop()
{
 int rightMotorSpeed=0;
  int leftMotorSpeed=0;
  Dabble.processInput();
  if (GamePad.isDownPressed())
  {
    rightMotorSpeed = -255;
    leftMotorSpeed = 255;
  }

  if (GamePad.isUpPressed())
  {
    rightMotorSpeed = 255;
    leftMotorSpeed = -255;
  }

  if (GamePad.isLeftPressed())
  {
    rightMotorSpeed = 255;
    leftMotorSpeed = 0;
  }

  if (GamePad.isRightPressed())
  {
    rightMotorSpeed = 0 ;
    leftMotorSpeed = -255;
  }

  rotateMotor(rightMotorSpeed, leftMotorSpeed);
  //tone(10,370,600);
  //delay(600);
}

void rotateMotor(int rightMotorSpeed, int leftMotorSpeed)
{
  if (rightMotorSpeed < 0)
  {
    digitalWrite(rightMotorPin1,LOW);
    digitalWrite(rightMotorPin2,HIGH);    
  }
  else if (rightMotorSpeed >= 0)
  {
    digitalWrite(rightMotorPin1,HIGH);
    digitalWrite(rightMotorPin2,LOW);      
  }

  if (leftMotorSpeed < 0)
  {
    digitalWrite(leftMotorPin1,LOW);
    digitalWrite(leftMotorPin2,HIGH);    
  }
  else if (leftMotorSpeed >= 0)
  {
    digitalWrite(leftMotorPin1,HIGH);
    digitalWrite(leftMotorPin2,LOW);      
  }

  analogWrite(enableRightMotor, abs(rightMotorSpeed));
  analogWrite(enableLeftMotor, abs(leftMotorSpeed)); 
}
 /* 
tone(10,370,600);
delay(600);

tone(3,554,300);
delay(300);

tone(3,466,300);
delay(300);

tone(3,466,600);
delay(600);

tone(3,415,300);
delay(300);

tone(3,370,300);
delay(300);

tone(3,370,300);
delay(300);

tone(3,494,600);//B
delay(600);

tone(3,466,300);
delay(300);

tone(3,466,300);
delay(300);

tone(3,415,300);
delay(300);

tone(3,415,300);
delay(300);

tone(3,370,600);
delay(600);

tone(3,370,300);
delay(300);

tone(3,554,300);
delay(300);

tone(3,466,300);
delay(300);

tone(3,466,600);
delay(600);

tone(3,415,300);
delay(300);

tone(3,370,300);
delay(300);

tone(3,370,300);
delay(300);

tone(3,311,600);
delay(600);

tone(3,277,900);
delay(1500);

tone(3,370,300);
delay(300);

tone(3,370,300);
delay(300);

tone(3,554,300);
delay(300);

//At this point I made custom presets

tone(3,466,300);//A#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,494,600);//B4
delay(600);

tone(3,466,300);//A#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,554,600);//C#5
delay(600);

tone(3,466,300);//A#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,600);//G#4
delay(600);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,415,600);//G#4
delay(600);

tone(3,311,900);//D#4
delay(1500);

tone(3,369,450);//F#4
delay(450);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,277,150);//C#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(450);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,369,450);//F#4
delay(450);

tone(3,466,150);//A#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,494,300);//B4
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,415,300);//G#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,415,450);//G#4
delay(450);

tone(3,415,150);//G#4
delay(150);

tone(3,466,300);//A#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,311,150);//D#4
delay(150);

tone(3,277,150);//C#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(600);

tone(3,466,150);//A#4
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,622,300);//D#5
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,622,300);//D#5
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,494,300);//B4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,415,300);//G#4
delay(300);

tone(3,369,600);//F#4
delay(750);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(900);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,311,300);//D#4
delay(300);

tone(3,311,600);//D#4
delay(1200);

//chorus

tone(3,466,300);//A#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,600);//F#4
delay(600);

tone(3,466,900);//A#4
delay(900);

tone(3,466,300);//A#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,600);//F#4
delay(600);

tone(3,466,600);//A#4
delay(600);

tone(3,369,300);//F#4
delay(300);

tone(3,466,600);//A#4
delay(600);

tone(3,554,600);//C#5
delay(600);

tone(3,494,300);//B4
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,622,300);//D#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,600);//G#4
delay(600);

tone(3,415,600);//G#4
delay(600);

tone(3,369,600);//F#4
delay(600);

tone(3,415,600);//G#4
delay(600);

tone(3,311,1800);//D#4
delay(1800);

//Second verse

tone(3,311,150);//D#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,466,300);//A#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,311,150);//D#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,494,300);//B4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,415,150);//G#4
delay(150);

tone(3,466,450);//A#4
delay(450);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,415,150);//G#4
delay(150);

tone(3,466,300);//A#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,415,150);//G#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,311,300);//D#4
delay(300);

tone(3,311,150);//D#4
delay(150);

tone(3,277,300);//C#4
delay(300);

tone(3,277,150);//C#4
delay(150);

tone(3,466,300);//A#4
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,622,450);//D#5
delay(450);

tone(3,554,150);//C#5
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,450);//F#4
delay(450);

tone(3,369,150);//F#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,494,300);//B4
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,311,300);//D#4
delay(300);

tone(3,311,450);//D#4
delay(450);

tone(3,277,150);//C#4
delay(150);

tone(3,622,300);//D#5
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,554,600);//C#5
delay(600);

tone(3,466,150);//A#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,750);//F#4
delay(750);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,415,150);//G#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,415,150);//G#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,415,150);//G#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,311,300);//D#4
delay(300);

tone(3,311,300);//D#4
delay(1200);

//Chorus

tone(3,466,300);//A#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,600);//F#4
delay(600);

tone(3,466,900);//A#4
delay(900);

tone(3,466,300);//A#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,600);//F#4
delay(600);

tone(3,466,600);//A#4
delay(600);

tone(3,369,300);//F#4
delay(300);

tone(3,932,600);//A#5
delay(600);

tone(3,1109,600);//C#6
delay(600);

tone(3,988,300);//B5
delay(300);

tone(3,1109,300);//C#6
delay(300);

tone(3,1245,300);//D#6
delay(300);

tone(3,1480,600);//F#6
delay(600);

tone(3,1661,300);//G#6
delay(300);

tone(3,1480,600);//F#6
delay(600);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,600);//G#4
delay(600);

tone(3,415,600);//G#4
delay(600);

tone(3,369,600);//F#4
delay(600);

tone(3,415,600);//G#4
delay(600);

tone(3,311,1800);//D#4
delay(1800);

//interlude

tone(3,1109,600);//C#6
delay(600);

tone(3,932,600);//A#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,932,600);//A#5
delay(600);

tone(3,988,300);//B5
delay(300);

tone(3,932,600);//A#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,300);//F#5
delay(300);

tone(3,622,300);//D#5
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,1109,600);//C#6
delay(600);

tone(3,932,600);//A#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,932,600);//A#5
delay(600);

tone(3,988,300);//B5
delay(300);

tone(3,932,600);//A#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,300);//F#5
delay(300);

tone(3,622,300);//D#5
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,1109,600);//C#6
delay(600);

tone(3,932,600);//A#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,932,600);//A#5
delay(600);

tone(3,988,300);//B5
delay(300);

tone(3,932,600);//A#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,300);//F#5
delay(300);

tone(3,622,300);//D#5
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,1109,600);//C#6
delay(600);

tone(3,932,600);//A#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,831,600);//G#5
delay(600);

tone(3,932,300);//A#5
delay(300);

tone(3,622,1800);//D#5
delay(1800);

//altered chorus

tone(3,466,300);//A#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,150);//F#4
delay(150);

tone(3,311,150);//D#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,369,600);//F#4
delay(600);

tone(3,466,900);//A#4
delay(900);

tone(3,932,300);//A#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,150);//F#5
delay(150);

tone(3,622,150);//D#5
delay(150);

tone(3,740,300);//F#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,150);//F#5
delay(150);

tone(3,622,150);//D#5
delay(150);

tone(3,740,300);//F#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,600);//F#5
delay(600);

tone(3,932,600);//A#5
delay(600);

tone(3,369,300);//F#4
delay(300);

tone(3,932,600);//A#5
delay(600);

tone(3,1109,600);//C#6
delay(600);

tone(3,988,300);//B5
delay(300);

tone(3,1109,300);//C#6
delay(300);

tone(3,1245,300);//D#6
delay(300);

tone(3,1480,1350);//F#6
delay(1350);

tone(3,740,300);//F#5
delay(300);

tone(3,740,300);//F#5
delay(300);

tone(3,831,300);//G#5
delay(300);

tone(3,740,300);//F#5
delay(300);

tone(3,1109,300);//C#6
delay(300);

tone(3,932,1500);//A#5
delay(1500);

//bridge

tone(3,369,600);//F#4
delay(600);

tone(3,554,300);//C#5
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,466,600);//A#4
delay(600);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,494,600);//B4
delay(600);

tone(3,466,300);//A#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,311,600);//D#4
delay(600);

tone(3,277,900);//C#4
delay(1500);

tone(3,622,150);//D#5
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,554,750);//C#5
delay(750);

tone(3,466,150);//A#4
delay(150);

tone(3,415,150);//G#4
delay(150);

tone(3,466,300);//A#4
delay(300);

tone(3,415,300);//G#4
delay(600);

tone(3,554,150);//C#5
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,494,300);//B4
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,494,150);//B4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,494,300);//B4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,311,300);//D#4
delay(300);

tone(3,277,300);//C#4
delay(300);

tone(3,311,300);//D#4
delay(300);

tone(3,277,300);//C#4
delay(300);

tone(3,554,600);//C#5
delay(600);

tone(3,466,300);//A#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,600);//F#4
delay(600);

tone(3,415,600);//G#4
delay(600);

tone(3,466,900);//A#4
delay(1350);

tone(3,622,450);//D#5
delay(450);

tone(3,554,150);//C#5
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,554,150);//C#5
delay(150);

tone(3,554,450);//C#5
delay(450);

tone(3,554,300);//C#5
delay(300);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,622,150);//D#5
delay(150);

tone(3,554,450);//C#5
delay(450);

tone(3,466,150);//A#4
delay(150);

tone(3,466,150);//A#4
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,494,300);//B4
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,415,300);//G#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,415,450);//G#4
delay(450);

tone(3,415,150);//G#4
delay(150);

tone(3,466,300);//A#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,311,150);//D#4
delay(150);

tone(3,277,150);//C#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(600 );

tone(3,466,150);//A#4
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,622,300);//D#5
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,622,300);//D#5
delay(300);

tone(3,466,150);//A#4
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,494,300);//B4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,415,300);//G#4
delay(300);

tone(3,369,600);//F#4
delay(750);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,150);//F#4
delay(150);

tone(3,369,150);//F#4
delay(150);

tone(3,369,300);//F#4
delay(300);

tone(3,369,600);//F#4
delay(1050);

tone(3,466,150);//A#4
delay(150);

tone(3,622,150);//D#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,554,150);//C#5
delay(150);

tone(3,554,150);//C#5
delay(150);

tone(3,554,300);//C#5
delay(300);

tone(3,554,600);//C#5
delay(1200);

//final chorus

tone(3,932,300);//A#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,150);//F#5
delay(150);

tone(3,622,150);//D#5
delay(150);

tone(3,740,300);//F#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,150);//F#5
delay(150);

tone(3,622,150);//D#5
delay(150);

tone(3,740,300);//F#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,600);//F#5
delay(600);

tone(3,932,900);//A#5
delay(900);

tone(3,932,300);//A#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,150);//F#5
delay(150);

tone(3,622,150);//D#5
delay(150);

tone(3,740,300);//F#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,150);//F#5
delay(150);

tone(3,622,150);//D#5
delay(150);

tone(3,740,300);//F#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,740,600);//F#5
delay(600);

tone(3,932,900);//A#5
delay(900);

tone(3,466,600);//A#4
delay(600);

tone(3,554,600);//C#5
delay(600);

tone(3,494,300);//B4
delay(300);

tone(3,554,300);//C#5
delay(300);

tone(3,622,300);//D#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,831,300);//G#5
delay(300);

tone(3,740,600);//F#5
delay(600);

tone(3,369,300);//F#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,415,300);//G#4
delay(300);

tone(3,369,300);//F#4
delay(300);

tone(3,466,300);//A#4
delay(300);

tone(3,415,600);//G#4
delay(600);

tone(3,415,600);//G#4
delay(600);

tone(3,369,600);//F#4
delay(600);

tone(3,415,600);//G#4
delay(600);

tone(3,311,1200);//D#4
delay(1500);

//final stretch

tone(3,740,300);//F#5
delay(300);

tone(3,932,600);//A#5
delay(600);

tone(3,1109,605);//C#6
delay(605);

tone(3,988,310);//B5
delay(310);

tone(3,1109,315);//C#6
delay(315);

tone(3,1245,320);//D#6
delay(320);

tone(3,1480,630);//F#6
delay(630);

tone(3,1661,335);//G#6
delay(335);

tone(3,1480,650);//F#6
delay(650);

tone(3,740,360);//F#5
delay(360);

tone(3,740,370);//F#5
delay(370);

tone(3,831,380);//G#5
delay(380);

tone(3,740,390);//F#5
delay(390);

tone(3,932,400);//A#5
delay(400);

tone(3,831,710);//G#5
delay(710);

tone(3,831,720);//G#5
delay(720);

tone(3,740,730);//F#5
delay(730);

tone(3,831,750);//G#5
delay(750);

tone(3,932,475);//A#5
delay(475);

tone(3,622,4000);//D#5
delay(7000);
*/
