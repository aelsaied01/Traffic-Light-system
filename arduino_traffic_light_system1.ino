// C++ code
//
int red=12;
int yellow=11;
int green=10;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);
  
  
  digitalWrite(yellow, LOW);

  digitalWrite(red, LOW);
  
  digitalWrite(green, HIGH);
 delay(2000);
   digitalWrite(green, LOW);
  
}