#define enA2 7
#define in3 5
#define in4 6
#define enA1 2
#define in1 3
#define in2 4
#define start 8

void setup() {
  pinMode(enA2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA1, OUTPUT);
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT);
  pinMode(start, INPUT_PULLUP);
  setSpeed(100);
}

void setSpeed(double speed)
{
  int leftSpeed = speed * 2.55;
  int rightSpeed = speed * 2.2;
  analogWrite(enA2, leftSpeed);
  analogWrite(enA1, rightSpeed);
}

void drive()
{
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}
void stop()
{
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {
  if (!digitalRead(start))
  {
    drive();
    delay(10000);
    stop();
  }
}