#define BUTON 2


void setup() 
{
  Serial.begin(9600);
  Serial.setTimeout(20000);
  pinMode(13, OUTPUT);
  pinMode(BUTON, INPUT);

  
}

void loop() 
{
  while (Serial.available()){
    
    char choice = Serial.read();
    if(choice=='1'){
      digitalWrite(13, HIGH);
      
    }
    if(choice=='2'){
      digitalWrite(13, LOW);
   
    }
    if(choice=='3'){
      for(int i=0;i<3;i++){
        digitalWrite(13, HIGH);
        delay(300);
        digitalWrite(13, LOW);
        delay(300);
      }
    }
    
    if(choice=='4'){
      int num = Serial.parseInt();
      delay(200);      
      int result = num*num;
      Serial.print(result,DEC);
    }
  }
}
