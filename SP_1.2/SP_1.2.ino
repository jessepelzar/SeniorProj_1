//#define LED_1 8
//#define LED_2 2
//#define LED_3 3
//#define LED_4 4
//#define LED_5 5
//#define LED_6 6
const int LEDS[] = {8,2,3,4,5,6,12};
#define sensor_1  11
//#define sensor_open 
//#define sensor_open 
#define actuatorSig 1
const int timeDelay = 2000;
int c = 0;


void setup() {
pinMode(LEDS[0], OUTPUT);
pinMode(LEDS[1], OUTPUT);
pinMode(LEDS[2], OUTPUT);
pinMode(LEDS[3], OUTPUT);
pinMode(LEDS[4], OUTPUT);
pinMode(LEDS[5], OUTPUT);
pinMode(LEDS[6], OUTPUT);
pinMode(sensor_1, INPUT);

Serial.begin(9600);
Serial.println("Program Starting");
delay(100);
}

void loop() {
  //int val = digitalRead(sensor_1);
  counter();

}

void counter() {
  
   int val = digitalRead(sensor_1);

    Serial.print("Sensor Value = ");
    Serial.print(val);
    Serial.println();
    //Serial.println("counter value = " + c );
    delay(100);
  
    while (val == 0 && c == 0) {
      val = digitalRead(sensor_1);
      digitalWrite(LEDS[6], LOW);
      digitalWrite(LEDS[0], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      if ( val == 1 ) {
         c = 1;
         return;
      }   
    }
    while (val == 0 && c == 1) {
      val = digitalRead(sensor_1);
      digitalWrite(LEDS[0], LOW);
      digitalWrite(LEDS[1], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      if ( val == 1 ) {
         c = 2;
         return;
      }   
    }
        while (val == 0 && c == 2) {
      val = digitalRead(sensor_1);
      digitalWrite(LEDS[1], LOW);
      digitalWrite(LEDS[2], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      if ( val == 1 ) {
         c = 3;
         return;
      }   
    }
        while (val == 0 && c == 3) {
      val = digitalRead(sensor_1);
      digitalWrite(LEDS[2], LOW);
      digitalWrite(LEDS[3], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      if ( val == 1 ) {
         c = 4;
         return;
      }   
    }
        while (val == 0 && c == 4) {
      val = digitalRead(sensor_1);
      digitalWrite(LEDS[3], LOW);
      digitalWrite(LEDS[4], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      if ( val == 1 ) {
         c = 5;
         return;
      }   
    }
        while (val == 0 && c == 5) {
      val = digitalRead(sensor_1);
      digitalWrite(LEDS[4], LOW);
      digitalWrite(LEDS[5], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      if ( val == 1 ) {
         c = 6;
         return;
      }   
    }
    
 // trigger actuator for open and close based on separate sensor vals
 // actuator open while top sensor != 0 && bottom sensor == 1
 // actuator close while bottom sensor != 0 && top sensor == 1
 
     while ( val == 0 && c == 6) {
      digitalWrite(LEDS[6], HIGH);
      digitalWrite(LEDS[0], LOW);
      digitalWrite(LEDS[1], LOW);
      digitalWrite(LEDS[2], LOW);
      digitalWrite(LEDS[3], LOW);
      digitalWrite(LEDS[4], LOW);
      digitalWrite(LEDS[5], LOW);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      c = 0;
      
    delay(timeDelay);
      return;
    }   
}




