

void setup() {
  Serial.begin(9600);
  
}

void loop() {

 //analogReference(EXTERNAL);
 int value = analogRead(A0);
 float volt = value*5/1023.0;
 Serial.print("Volataje = ");
 Serial.println(volt);
 delay(1000);
}
