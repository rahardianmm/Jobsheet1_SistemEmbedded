// set pin numbers
const int buttonPin1 = 5;   // the number of the pushbutton pin
const int buttonPin2 = 18;  // the number of the pushbutton pin
const int ledPinM1 = 15;    // the number of the LED pin
const int ledPinK2 = 2;     // the number of the LED pin
// variable for storing the pushbutton status
int buttonState1 = 0;
int buttonState2 = 0;


void setup() {
 Serial.begin(115200);
 // initialize the pushbutton pin as an input
 pinMode(buttonPin1, INPUT);
 pinMode(buttonPin2, INPUT);
 // initialize the LED pin as an output
 pinMode(ledPinM1, OUTPUT);
 pinMode(ledPinK2, OUTPUT);
}


void loop() {
 // read the state of the pushbutton value
 buttonState1 = digitalRead(buttonPin1);
 Serial.println(buttonState1);
 // check if the pushbutton is pressed.
 // if it is, the buttonState1 is HIGH
 if (buttonState1 == HIGH) {
 // turn LED on
 digitalWrite(ledPinM1, HIGH);
 } else {
 // turn LED off
 digitalWrite(ledPinM1, LOW);
 }

 // read the state of the pushbutton value
 buttonState2 = digitalRead(buttonPin2);
 Serial.println(buttonState2);
 // check if the pushbutton is pressed.
 // if it is, the buttonState2 is HIGH
 if (buttonState2 == HIGH) {
  digitalWrite(ledPinK2, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(ledPinK2, LOW);     // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
 }
}