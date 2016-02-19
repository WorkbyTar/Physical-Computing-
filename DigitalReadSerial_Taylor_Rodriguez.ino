/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
int switchButton = 3;
int potentiometer = A0;
int pressureSensor = A1;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(switchButton, INPUT);
  pinMode(potentiometer, INPUT);
  pinMode(pressureSensor, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int pushButtonState = digitalRead(pushButton);
  int switchButtonState = digitalRead(pushButton);
  int potentiometerState = analogRead(A0);
  int pressureSensorState = analogRead(A1);
  
   // print out the state of the button:
  Serial.println("Button");
  Serial.println(pushButtonState);
  Serial.println("Switch");
  Serial.println(switchButtonState);
  Serial.println("Potentiometer");
  Serial.println(potentiometerState);
  Serial.println("Pressure Sensor");
  Serial.println(pressureSensorState);
  
  delay(1000);        // delay in between reads for stability
}



