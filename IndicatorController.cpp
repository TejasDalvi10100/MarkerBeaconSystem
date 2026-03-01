int irInner=6,irMiddle=13,irOuter=12,irRunway=9;
int ledInner=2,ledMiddle=3,ledOuter=4;
int
  sounds = 11; // Declaration of variables with pin numbers of components
int valIn=0,valMd=0,valOt=0,valRunway=0;
void
  setup()
{
 pinMode(irInner, INPUT_PULLUP); // input component
 pinMode(ledInner,
  OUTPUT); //output component
 
 pinMode(irMiddle, INPUT_PULLUP);
 pinMode(ledMiddle,
  OUTPUT);
 
 pinMode(irOuter, INPUT_PULLUP);
 pinMode(ledOuter, OUTPUT);

  pinMode(irRunway,INPUT_PULLUP); 
}
void loop()
{
 valIn=digitalRead(irInner);
  //getting current state of sensor(HIGH or LOW)
 valMd=digitalRead(irMiddle);

  valOt=digitalRead(irOuter);
 valRunway=digitalRead(irRunway);
 if(valOt==LOW
  ) //if obstacle on outer sensor
 {
35
 digitalWrite(ledOuter, HIGH); //led
  on
 tone(sounds, 1500, 350); //buzzer or speaker starts beeping sound
 delay(350);

  }
 else
 {
 digitalWrite(ledOuter,LOW); //led off
 }
 delay(50);

  
 if(valMd==LOW )
 { 
 digitalWrite(ledMiddle, HIGH);
 tone(sounds,
  1200, 100);
 delay(200);
 tone(sounds, 1100, 450);
 delay(250);
 }

  else
 {
 digitalWrite(ledMiddle, LOW);
 }
 delay(50);
 
 if(valIn==LOW
  )
 { 
 digitalWrite(ledInner, HIGH);
 tone(sounds, 1000, 100);
 delay(100);

  } 
 else
 {
 digitalWrite(ledInner, LOW);
 }
 delay(50);
 

  if(valRunway==LOW)
 { 
 delay(10000);
 } 
}
