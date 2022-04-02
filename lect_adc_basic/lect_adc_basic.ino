

void setup() {
  Serial.begin(9600);
  
}

void loop() {

 analogReference(EXTERNAL);
 int value = analogRead(A0);
 float volt = value*3.3/1023.0;
 Serial.println(volt);
 delay(1000);
}
