#define enA2 7
#define in3 5
#define in4 6
#define enA1 2
#define in1 3
#define in2 4

void setup() {
  pinMode(enA2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  analogWrite(enA2, 255); // Send PWM signal to L298N Enable pin
  analogWrite(enA1, 255);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void loop() {
 

}