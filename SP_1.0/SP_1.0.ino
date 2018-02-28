#define LED_1 8
#define LED_2 2
#define LED_3 3
#define LED_4 4
#define LED_5 5
#define LED_6 6
//const int LEDS[] = {8,2,3,4,5,6,7};
#define actuatorSig 1
#define sensorIn  11

void setup() {
pinMode(LED_1, OUTPUT);
pinMode(LED_2, OUTPUT);
pinMode(LED_3, OUTPUT);
pinMode(LED_4, OUTPUT);
pinMode(LED_5, OUTPUT);
pinMode(LED_6, OUTPUT);
pinMode(actuatorSig, OUTPUT);
pinMode(sensorIn, INPUT);

Serial.begin(9600);
Serial.println("Program Starting");
delay(100);
}

void loop() {
  //int val = digitalRead(sensorIn);
  counter();
  
}

void counter() {
  int c = 0;
   int val = digitalRead(sensorIn);

  
  
  Serial.print("Sensor Value = ");
  Serial.print(val);
  Serial.println();
  //Serial.println("counter value = " + c );
  delay(100);

    if (val == 0 ) {
      digitalWrite(LED_1, HIGH);
    }
  
    
    else {
      digitalWrite(LED_1, LOW);
    }
  
}

