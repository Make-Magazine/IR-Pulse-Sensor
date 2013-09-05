/*
this goes on your Arduino
for use with Processing example IRPulseSensor

*/

// holds temp vals

void setup() {
  
  Serial.begin(9600);  
}

void loop() {  
 
    Serial.println(analogRead(0));
  }
