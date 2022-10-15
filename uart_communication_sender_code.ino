// C++ code
// Sender's Code in UART
char mystr[20] = "Jhukega Nahi Sala"; //Message given by sender of size 20 

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  Serial.write(mystr,20); //Write the serial data
  delay(1000);
}