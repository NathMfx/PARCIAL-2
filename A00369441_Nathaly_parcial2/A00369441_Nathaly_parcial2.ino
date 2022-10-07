// C++ code
//
int myLEDs[5] = {4,5,6,7,8};
/*bool btnState = false;
int BTN_PIN = 8;*/
int SensorPin = A0;


  
void setup() {
  {
  for(int i = 0; i < 5; i++){
    pinMode(myLEDs[i], OUTPUT);
  }
  
  Serial.begin(9600);
 
}


void loop(){
  int humedad = analogRead(SensorPin);
  Serial.println(humedad);
  delay(1000);
  if (humedad>=460)
      for(int i = 0; i < 5; i++){
    if(btnState){
      digitalWrite(myLEDs[4-i], HIGH);
    }else{
      digitalWrite(myLEDs[i], HIGH);
}
    delay(500);
  }
}
}

    /*btnState = digitalRead(BTN_PIN);
  
  for(int i = 0; i < 5; i++){
    if(btnState){
      digitalWrite(myLEDs[4-i], HIGH);
    }else{
      digitalWrite(myLEDs[i], HIGH);
}
    delay(500);
  }
  
   
  for(int i = 0; i < 5; i++){
      digitalWrite(myLEDs[i], LOW);
    }else{
    digitalWrite(myLEDs[4-i], LOW);
}
    delay(500);
  }
  }*/
