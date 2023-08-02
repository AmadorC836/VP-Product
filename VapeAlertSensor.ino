int analogPin = A0;
int val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); 
  if (val > 500) {
    Serial.println("Send notification to user");
  }
  else {
    Serial.println("Reading Normal!");
    Serial.print("val = "); 
    Serial.println(val);
  }
  delay(100);
}