void setup() {
  Serial.begin(9600); //baud rate
  Serial.print("Your code is working!");

  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for( int i = 0 ; i < 256 ; i++){
    analogWrite(11, i);
    delay(50);
  }

}

//hahahah
