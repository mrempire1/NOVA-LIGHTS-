const int IR_PIN = A1; // LDR sensor connected to analog pin A0
const int LED_PIN_1 = 10; // first LED connected to digital pin 2
const int LED_PIN_2 = 9; // second LED connected to digital pin 3
const int LED_PIN_3 = 6; // third LED connected to digital pin 4
const int RESISTOR = 10000; // 10k resistor value in ohms

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(IR_PIN); // read the LDR sensor value
  Serial.println(sensorValue); // print the sensor value to the Serial Monitor
  
  if(sensorValue >500 ){ // check if sensor value is greater than 500
    digitalWrite(LED_PIN_1, HIGH); // turn on first LED
    digitalWrite(LED_PIN_2, HIGH); // turn on second LED
    digitalWrite(LED_PIN_3, HIGH); // turn on third LED
  } else {
    digitalWrite(LED_PIN_1, LOW); // turn off first LED
    digitalWrite(LED_PIN_2, LOW); // turn off second LED
    digitalWrite(LED_PIN_3, LOW); // turn off third LED
  }
  
  delay(100); // wait for 100 milliseconds
}

