const int LDR_PIN = A0; // LDR sensor connected to analog pin A0
const int LED_PIN_1 = 13; // first LED connected to digital pin 2
const int LED_PIN_2 = 12; // second LED connected to digital pin 3
const int LED_PIN_3 = 11; // third LED connected to digital pin 4
const int RESISTOR = 10000; // 10k resistor value in ohms

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(LDR_PIN); // read the LDR sensor value
  Serial.println(sensorValue); // print the sensor value to the Serial Monitor
  
  if(sensorValue >300 ){ // check if sensor value is greater than 500
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
