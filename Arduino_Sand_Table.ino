int ENA1=2;
int IN1_1=3;
int IN2_1=4;
int IN3_1=5;
int IN4_1=6;
int ENB1=7;
int ENA2=8;
int IN1_2=9;
int IN2_2=10;
int IN3_2=11;
int IN4_2=12;
int ENB2=13;

void setup()
{
 pinMode(ENA1,OUTPUT);
 pinMode(ENB1,OUTPUT);
 pinMode(IN1_1,OUTPUT);
 pinMode(IN2_1,OUTPUT);
 pinMode(IN3_1,OUTPUT);
 pinMode(IN4_1,OUTPUT);
 digitalWrite(ENA1,HIGH);
 digitalWrite(ENB1,HIGH);
 pinMode(ENA2,OUTPUT);
 pinMode(ENB2,OUTPUT);
 pinMode(IN1_2,OUTPUT);
 pinMode(IN2_2,OUTPUT);
 pinMode(IN3_2,OUTPUT);
 pinMode(IN4_2,OUTPUT);
 digitalWrite(ENA2,HIGH);
 digitalWrite(ENB2,HIGH);
}

void loop()
{
  for(int i = 0 ; i < 100 ; i++ ){
    yPlusMove();
  }
  for(int i = 0 ; i < 100 ; i++ ){
    yMinusMove();      
  }                                                          
}
void Motor1TurnLeft(){
 digitalWrite(IN1_1,LOW);
 digitalWrite(IN2_1,HIGH);
 digitalWrite(IN3_1,HIGH);
 digitalWrite(IN4_1,LOW);
 delay(3);

 digitalWrite(IN1_1,LOW);
 digitalWrite(IN2_1,HIGH);
 digitalWrite(IN3_1,LOW);
 digitalWrite(IN4_1,HIGH);
 delay(3);

 digitalWrite(IN1_1,HIGH);
 digitalWrite(IN2_1,LOW);
 digitalWrite(IN3_1,LOW);
 digitalWrite(IN4_1,HIGH);
 delay(3);

 digitalWrite(IN1_1,HIGH);
 digitalWrite(IN2_1,LOW);
 digitalWrite(IN3_1,HIGH);
 digitalWrite(IN4_1,LOW);
 delay(3);
}
void Motor1TurnRight(){
 digitalWrite(IN1_1,HIGH);
 digitalWrite(IN2_1,LOW);
 digitalWrite(IN3_1,HIGH);
 digitalWrite(IN4_1,LOW);
 delay(3);

 digitalWrite(IN1_1,HIGH);
 digitalWrite(IN2_1,LOW);
 digitalWrite(IN3_1,LOW);
 digitalWrite(IN4_1,HIGH);
 delay(3);

 digitalWrite(IN1_1,LOW);
 digitalWrite(IN2_1,HIGH);
 digitalWrite(IN3_1,LOW);
 digitalWrite(IN4_1,HIGH);
 delay(3);

 digitalWrite(IN1_1,LOW);
 digitalWrite(IN2_1,HIGH);
 digitalWrite(IN3_1,HIGH);
 digitalWrite(IN4_1,LOW);
 delay(3);
}
void Motor2TurnLeft(){
 digitalWrite(IN1_2,LOW);
 digitalWrite(IN2_2,HIGH);
 digitalWrite(IN3_2,HIGH);
 digitalWrite(IN4_2,LOW);
 delay(3);

 digitalWrite(IN1_2,LOW);
 digitalWrite(IN2_2,HIGH);
 digitalWrite(IN3_2,LOW);
 digitalWrite(IN4_2,HIGH);
 delay(3);

 digitalWrite(IN1_2,HIGH);
 digitalWrite(IN2_2,LOW);
 digitalWrite(IN3_2,LOW);
 digitalWrite(IN4_2,HIGH);
 delay(3);

 digitalWrite(IN1_2,HIGH);
 digitalWrite(IN2_2,LOW);
 digitalWrite(IN3_2,HIGH);
 digitalWrite(IN4_2,LOW);
 delay(3);
}
void Motor2TurnRight(){
 digitalWrite(IN1_2,HIGH);
 digitalWrite(IN2_2,LOW);
 digitalWrite(IN3_2,HIGH);
 digitalWrite(IN4_2,LOW);
 delay(3);

 digitalWrite(IN1_2,HIGH);
 digitalWrite(IN2_2,LOW);
 digitalWrite(IN3_2,LOW);
 digitalWrite(IN4_2,HIGH);
 delay(3);

 digitalWrite(IN1_2,LOW);
 digitalWrite(IN2_2,HIGH);
 digitalWrite(IN3_2,LOW);
 digitalWrite(IN4_2,HIGH);
 delay(3);

 digitalWrite(IN1_2,LOW);
 digitalWrite(IN2_2,HIGH);
 digitalWrite(IN3_2,HIGH);
 digitalWrite(IN4_2,LOW);
 delay(3);
}
void xPlusMove(){
  Motor1TurnRight();
  Motor2TurnRight();
}
void xMinusMove(){
  Motor1TurnLeft();
  Motor2TurnLeft();
}
void yPlusMove(){
  Motor1TurnLeft();
  Motor2TurnRight();
}
void yMinusMove(){
  Motor1TurnRight();
  Motor2TurnLeft();
}
