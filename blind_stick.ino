// C++ code
//
void setup()
{
  pinMode(6, INPUT);//eco is input pin
  pinMode(7, OUTPUT);//TRIG IS OUTPUT PIN
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(7,0);
  delayMicroseconds(2);
  digitalWrite(7,1);
  delayMicroseconds(2);
  digitalWrite(7,0);
  
  int time=pulseIn(6,1);
  float distance=(34300*time)/(2*1000000);
  Serial.println(distance);
  if(distance<=250)
    {
    digitalWrite(8,255);
    //tone(8,440,5000);
    }
  else
    {
    digitalWrite(8,0);
    }
    
  
}