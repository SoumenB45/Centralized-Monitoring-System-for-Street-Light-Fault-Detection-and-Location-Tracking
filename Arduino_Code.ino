// ...........ARDUINO CODE FOR 3 LDRs TO TRANSFER DATA TO NodeMC.......... //

const int ldrPin1 = A0; // LDR 1 connected to analog pin A0
const int ldrPin2 = A1; // LDR 2 connected to analog pin A1
const int ldrPin2 = A2; // LDR 3 connected to analog pin A2
const int threshold1 = 100;
const int threshold2 = 240;

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {

// Read LDR 1 value from analog pin A0
  float ldrValue1 = analogRead(ldrPin1); 
  // Print the LDR values to the Serial Plotter
  Serial.print(ldrValue1);
  Serial.print(",");
  // Check if LDR values are below the low threshold
  if (ldrValue1 < threshold1) {
    Serial.print(" LDR 1: Light is not Glowing");
    Serial.print(",");
  } else if (ldrValue1 < threshold2) { 
    Serial.print(" LDR 1: Light needs maintenance (Low Light)");
    Serial.print(",");
  } else {
    Serial.print(" LDR 1: Light is Normal");
    Serial.println("");
  }

  // Read LDR 2 value from analog pin A1
  float ldrValue2 = analogRead(ldrPin2); 
  // Print the LDR values to the Serial Plotter
  Serial.print(ldrValue2);
  Serial.print(",");
  // Check if LDR values are below the low threshold
  if (ldrValue2 < threshold1) {
    Serial.print(" LDR 2: Light is not Glowing");
    Serial.print(",");
  } else if (ldrValue2 < threshold2) { 
    Serial.print(" LDR 2: Light needs maintenance (Low Light)");
    Serial.print(",");
  } else {
    Serial.print(" LDR 2: Light is Normal");
    Serial.println("");
  }
  Serial.println("");

  // Read LDR 3 value from analog pin A2
  float ldrValue3 = analogRead(ldrPin3);  
  // Print the LDR values to the Serial Plotter
  Serial.print(ldrValue3);
  Serial.print(",");
  // Check if LDR values are below the low threshold
  if (ldrValue3 < threshold1) {
    Serial.print(" LDR 3: Light is not Glowing");
    Serial.print(",");
  } else if (ldrValue3 < threshold2) { 
    Serial.print(" LDR 3: Light needs maintenance (Low Light)");
    Serial.print(",");
  } else {
    Serial.print(" LDR 3: Light is Normal");
    Serial.println("");
  }
  Serial.println("");

  delay(3000); // Delay for readability, adjust as needed
}