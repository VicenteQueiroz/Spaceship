
/* Slider Potentiometer controlling LEDs
   ------------------

   turns on and off a light emitting diode(LED) connected to digital
   pin 13. Each LED will be open acording to a certain range of the potentiometer, creating a slide effect.

   Created 1 September 2019
   Vicente Queiroz

*/

int potPin = 1;    // select the input pin for the potentiometer
int ledPinG0 = 0;   // Green LED
int ledPinG1 = 1;   // Green LED
int ledPinG2 = 2;   // Green LED
int ledPinG3 = 3;   // Green LED
int ledPinY0 = 4;   // Yellow LED
int ledPinY1 = 5;   // Yellow LED
int ledPinY2 = 6;   // Yellow LED
int ledPinR0 = 7;   // Red LED

int val = 0;       // variable to store the value coming from the sensor

void setup() {
  // initialize serial communication at 9600 bits per second:
  //Serial.begin(9600);

  // declare the ledPins as OUTPUT
  pinMode(ledPinG0, OUTPUT);
  pinMode(ledPinG1, OUTPUT);
  pinMode(ledPinG2, OUTPUT);
  pinMode(ledPinG3, OUTPUT);
  pinMode(ledPinY0, OUTPUT);
  pinMode(ledPinY1, OUTPUT);
  pinMode(ledPinY2, OUTPUT);
  pinMode(ledPinR0, OUTPUT);
}

void loop() {
  val = analogRead(potPin);    // read the value from the potentiometer

  if (val <= 60) {
    digitalWrite(ledPinG0, LOW);
    digitalWrite(ledPinG1, LOW);
    digitalWrite(ledPinG2, LOW);
    digitalWrite(ledPinG3, LOW);
    digitalWrite(ledPinY0, LOW);
    digitalWrite(ledPinY1, LOW);
    digitalWrite(ledPinY2, LOW);
    digitalWrite(ledPinR0, LOW);
  }
  else if (val > 60 && val <= 128) {
    digitalWrite(ledPinG0, HIGH);
    digitalWrite(ledPinG1, LOW);
    digitalWrite(ledPinG2, LOW);
    digitalWrite(ledPinG3, LOW);
    digitalWrite(ledPinY0, LOW);
    digitalWrite(ledPinY1, LOW);
    digitalWrite(ledPinY2, LOW);
    digitalWrite(ledPinR0, LOW);
  }
  else if (val > 128 && val <= 256) {
    digitalWrite(ledPinG0, HIGH);
    digitalWrite(ledPinG1, HIGH);
    digitalWrite(ledPinG2, LOW);
    digitalWrite(ledPinG3, LOW);
    digitalWrite(ledPinY0, LOW);
    digitalWrite(ledPinY1, LOW);
    digitalWrite(ledPinY2, LOW);
    digitalWrite(ledPinR0, LOW);
  }
  else if (val > 256 && val <= 384) {
    digitalWrite(ledPinG0, HIGH);
    digitalWrite(ledPinG1, HIGH);
    digitalWrite(ledPinG2, HIGH);
    digitalWrite(ledPinG3, LOW);
    digitalWrite(ledPinY0, LOW);
    digitalWrite(ledPinY1, LOW);
    digitalWrite(ledPinY2, LOW);
    digitalWrite(ledPinR0, LOW);
  }
  else if (val > 384 && val <= 512) {
    digitalWrite(ledPinG0, HIGH);
    digitalWrite(ledPinG1, HIGH);
    digitalWrite(ledPinG2, HIGH);
    digitalWrite(ledPinG3, HIGH);
    digitalWrite(ledPinY0, LOW);
    digitalWrite(ledPinY1, LOW);
    digitalWrite(ledPinY2, LOW);
    digitalWrite(ledPinR0, LOW);
  }
  else if (val > 512 && val <= 640) {
    digitalWrite(ledPinG0, HIGH);
    digitalWrite(ledPinG1, HIGH);
    digitalWrite(ledPinG2, HIGH);
    digitalWrite(ledPinG3, HIGH);
    digitalWrite(ledPinY0, HIGH);
    digitalWrite(ledPinY1, LOW);
    digitalWrite(ledPinY2, LOW);
    digitalWrite(ledPinR0, LOW);
  }
  else if (val > 640 && val <= 768) {
    digitalWrite(ledPinG0, HIGH);
    digitalWrite(ledPinG1, HIGH);
    digitalWrite(ledPinG2, HIGH);
    digitalWrite(ledPinG3, HIGH);
    digitalWrite(ledPinY0, HIGH);
    digitalWrite(ledPinY1, HIGH);
    digitalWrite(ledPinY2, LOW);
    digitalWrite(ledPinR0, LOW);
  }
  else if (val > 768 && val <= 896) {
    digitalWrite(ledPinG0, HIGH);
    digitalWrite(ledPinG1, HIGH);
    digitalWrite(ledPinG2, HIGH);
    digitalWrite(ledPinG3, HIGH);
    digitalWrite(ledPinY0, HIGH);
    digitalWrite(ledPinY1, HIGH);
    digitalWrite(ledPinY2, HIGH);
    digitalWrite(ledPinR0, LOW);
  }
  else {
    digitalWrite(ledPinG0, HIGH);
    digitalWrite(ledPinG1, HIGH);
    digitalWrite(ledPinG2, HIGH);
    digitalWrite(ledPinG3, HIGH);
    digitalWrite(ledPinY0, HIGH);
    digitalWrite(ledPinY1, HIGH);
    digitalWrite(ledPinY2, HIGH);
    digitalWrite(ledPinR0, HIGH);
  }
  //Serial.println(val);
  //delay(25);        // delay in between reads for stability
}
