void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {

  // outer loop 
  for (int i = 0; i <= 15; i++){
    int num = i;
    // inner loop ( converts decimal to binary)
    for ( int j = 2; j < 6; j++){

      if ( num % 2 == 0 ){
      digitalWrite(j, LOW);
      }
      else digitalWrite(j, HIGH);
      num /= 2;

    }
    delay(850);
  }
  


}

