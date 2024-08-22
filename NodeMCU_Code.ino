// ............NodeMCU CODE ONLY TO RECIEVE DATA FROM ARDUINO........... //

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    String data = Serial.readStringUntil('\n');
    Serial.println(data);
    int comma = data.indexOf(',');
    if(comma!=-1) {
     float ldrvalue1=data.substring(0,comma).toFloat();
     float ldrvalue2=data.substring(comma+1).toFloat();
     Serial.print(ldrvalue1);
     Serial.println(ldrvalue2);
    }
  }
}