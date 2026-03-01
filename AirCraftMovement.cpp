int en = 11, in1 = 7, in2 = 8; 

void setup() {
// put your setup
  code here, to run once:
pinMode(en, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2,
  OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
digitalWrite(in1,
  LOW);
digitalWrite(in2, HIGH);

analogWrite(en, 96);

delay(14000);

digitalWrite(in1,
  LOW);
digitalWrite(in2, LOW);

delay(5000);

digitalWrite(in1, HIGH);
digitalWrite(in2,
  LOW);

analogWrite(en, 180);

delay(10500);

digitalWrite(in1,
  LOW);
digitalWrite(in2, LOW);

delay(8000);

}