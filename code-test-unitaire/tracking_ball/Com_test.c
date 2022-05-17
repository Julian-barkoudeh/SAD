int x;
void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
 pinMode(13, OUTPUT);
 digitalWrite(13, LOW);
}
void loop() {
 while (!Serial.available());
 x = Serial.readString().toInt();
 if(x == 1){
    digitalWrite(13, HIGH);
 }
 else if(x == -1){
  digitalWrite(13, LOW);
 }
 Serial.print(x + 1);
}
