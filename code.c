// pin definations
//LEFT MOTOR
#define ENAPIN 9
#define N1PIN 4
#define N2PIN 6
//RIGHT MOTOR
#define ENBPIN 10
#define N3PIN 7
#define N4PIN 11

#define LeftSensorPin 3
#define CenterSensorPin 13
#define RightSensorPin 2

int leftmotorSpeed = 170;
int rightmotorspeed = 180;
void setup() {
  // put your setup code here, to run once:T
  pinMode(ENAPIN,OUTPUT);
  pinMode(N1PIN,OUTPUT);
  pinMode(N2PIN,OUTPUT);

  pinMode(ENBPIN,OUTPUT);
  pinMode(N3PIN,OUTPUT);
  pinMode(N4PIN,OUTPUT);
  
  pinMode(LeftSensorPin,INPUT);
  pinMode(CenterSensorPin,INPUT);
  pinMode(RightSensorPin,INPUT);
  
  analogWrite(ENAPIN,leftmotorSpeed);
  analogWrite(ENBPIN,rightmotorspeed);
}

// defining required functions

void MoveForward(){
  digitalWrite(N1PIN,HIGH);
  digitalWrite(N2PIN,LOW);
  digitalWrite(N3PIN,HIGH);
  digitalWrite(N4PIN,LOW);
}

void MoveBackward(){
  digitalWrite(N1PIN,LOW);
  digitalWrite(N2PIN,HIGH);
  digitalWrite(N3PIN,LOW);
  digitalWrite(N4PIN,HIGH);
}


void TurnLeft(){
  digitalWrite(N1PIN,LOW);
  digitalWrite(N2PIN,HIGH);
  digitalWrite(N3PIN,HIGH);
  digitalWrite(N4PIN,LOW);
}

void TurnRight(){
  digitalWrite(N1PIN,HIGH);
  digitalWrite(N2PIN,LOW);
  digitalWrite(N3PIN,LOW);
  digitalWrite(N4PIN,HIGH);
}

void Stop(){
  digitalWrite(N1PIN,LOW);
  digitalWrite(N2PIN,LOW);
  digitalWrite(N3PIN,LOW);
  digitalWrite(N4PIN,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int LeftSensorValue = digitalRead(LeftSensorPin); 
  int CenterSensorValue = digitalRead(CenterSensorPin);
  int RightSensorValue = digitalRead(RightSensorPin);
  
  if(LeftSensorValue == 0 && CenterSensorValue == 1 && RightSensorValue == 0){MoveForward();}
  
  else if(LeftSensorValue == 0 && CenterSensorValue == 1 && RightSensorValue == 1){TurnRight();}
  
  else if(LeftSensorValue == 1 && CenterSensorValue == 1 && RightSensorValue == 0){TurnLeft();}
  
  else if(LeftSensorValue == 1 && CenterSensorValue == 1 && RightSensorValue == 1 ){MoveForward();}
  
  else{Stop();}
}