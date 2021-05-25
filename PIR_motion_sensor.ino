const int PIR_sensor = 2;
const int LED = 8;
const int buzzer = 10;
void setup() {
  Serial.begin(9600);// setup Serial Monitor to display information
  pinMode(PIR_sensor, INPUT);// Input from sensor
  pinMode(LED, OUTPUT);// OUTPUT to alarm or LED
  pinMode(buzzer, OUTPUT); // OUTPUT to the buzzer
}

void loop() {
  int motion =digitalRead(PIR_sensor);
  if(motion){
    Serial.println(" Warning : Motion detected !");
    digitalWrite(LED,HIGH);
    tone(buzzer, 1000);
  }
  else{
     Serial.println("No motion detected");
     digitalWrite(LED,LOW);
     noTone(buzzer);
  }
  delay(500);

}
 
