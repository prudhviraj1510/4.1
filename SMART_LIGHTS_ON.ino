
int motion = 2;
int LeD =3;

void setup() 
{
  Serial.begin(9600);
  pinMode(motion, INPUT);
  pinMode(LeD, OUTPUT);
}

void loop() 
{
  long motion_sensor = digitalRead(motion);
  
  if (motion_sensor == HIGH) 
    {
    digitalWrite (LeD, HIGH);
    
    Serial.println("Active");
    delay (10000);
    }
  
    else
    {
    digitalWrite(LeD,LOW);
    }
  
  if (motion_sensor== HIGH)
  {
    Serial.println("Active");

  }
  else 
  {
    Serial.println("Inactive");

  }
  delay(500);
}
