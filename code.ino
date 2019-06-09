void setup() {
Serial.begin(9600);
 pinMode(8, OUTPUT); // put your setup code here, to run once:
 }
 
void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case '1': digitalWrite(8, HIGH);break; // when input is given 1 
        case '0': digitalWrite(8, LOW);break; // when input is given 0
        default : break;
      }
      Serial.println(data);
   }
   delay(100);
}
