#define led 3

void setup() {

    pinMode(led,OUTPUT);
    Serial.begin(9600);

}

void loop() {

  int isik = analogRead(A0);
  Serial.println(isik);
  delay(50);

  if(isik > 950){
    digitalWrite(led,LOW);
  }

  if(isik < 830){
    digitalWrite(led,HIGH);
    delay(550);
    digitalWrite(led,LOW);
    delay(550);
    
    }

}
