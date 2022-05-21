#define potentiometer A0

void setup()
{
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(potentiometer);
  Serial.println(val);
  delay(1000);
  
}