// set pin numbers
const int buttonPin1 = 5;   // the number of the pushbutton pin
const int ledPinM1 = 15;    // the number of the LED pin
// variable for storing the pushbutton status
int buttonState1 = 0;

void setup() {
 Serial.begin(115200);
 // initialize the pushbutton pin as an input
 pinMode(buttonPin1, INPUT);
 // initialize the LED pin as an output
 pinMode(ledPinM1, OUTPUT);
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
}