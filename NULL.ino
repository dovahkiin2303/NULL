
#define StepPin1 2
#define DirPin1 3
#define StepPin2 4
#define DirPin2 5
#define buzzer 8

int buton = 7;
int button_state = 0;
int buzzer_index = 0;
void setup() {
  pinMode(StepPin1,OUTPUT);
  pinMode(DirPin1,OUTPUT);
  pinMode(StepPin2,OUTPUT);
  pinMode(DirPin1,OUTPUT);
  pinMode(buton,INPUT_PULLUP);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);  //debug


}

void loop() {
  
  button_state = digitalRead(buton);
  Serial.println(button_state);  //debug
  if(buzzer_index==0) {
    digitalWrite(buzzer,1);
    buzzer_index=1);
  }
  if (button_state==0){
    digitalWrite(buzzer,0);
    //roata 1
    digitalWrite(DirPin1,1);
    for(int x=0;x<100;x++){
      digitalWrite(StepPin1,1);
      delayMicroseconds(1000);
      digitalWrite(StepPin1,0);
      delayMicroseconds(1000);  
    }

    //roata 2
    digitalWrite(DirPin2,1);
    for(int x=0;x<100;x++){
      digitalWrite(StepPin2,1);
      delayMicroseconds(800);
      digitalWrite(StepPin2,0);
      delayMicroseconds(800);  
    }
    delay(500);
     digitalWrite(DirPin1,1);
    for(int x=0;x<100;x++){
      digitalWrite(StepPin1,1);
      delayMicroseconds(1000);
      digitalWrite(StepPin1,0);
      delayMicroseconds(1000);  
    }

    //roata 2
    digitalWrite(DirPin2,1);
    for(int x=0;x<100;x++){
      digitalWrite(StepPin2,1);
      delayMicroseconds(800);
      digitalWrite(StepPin2,0);
      delayMicroseconds(800);  
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
   // if(buzzer_index==0) digitalWrite(buzzer,1);
    //delay(400);
    //buzzer_index==1;

   /* if (buzzer_index==0) {
      digitalWrite(buzzer,1); buzzer_index=1;  delay(50);
      }
    else if (buzzer_index==1) {digitalWrite(buzzer,0); buzzer_index=0; delay(50);}*/
  }
  

}
