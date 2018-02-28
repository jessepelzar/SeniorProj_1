//#define LED_1 8
//#define LED_2 2
//#define LED_3 3
//#define LED_4 4
//#define LED_5 5
//#define LED_6 6
const int LEDS[] = {8,2,3,4,5,6,7};
#define actuatorSig 1
#define sensorIn  11
int c = 0;
void setup() {
pinMode(LEDS[0], OUTPUT);
pinMode(LEDS[1], OUTPUT);
pinMode(LEDS[2], OUTPUT);
pinMode(LEDS[3], OUTPUT);
pinMode(LEDS[4], OUTPUT);
pinMode(LEDS[5], OUTPUT);
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
  
   int val = digitalRead(sensorIn);

  
  
  Serial.print("Sensor Value = ");
  Serial.print(val);
  Serial.println();
  //Serial.println("counter value = " + c );
  delay(100);

    if (val == 0 && c == 0) {
      digitalWrite(LEDS[6], LOW);
      digitalWrite(LEDS[0], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      c++;
      return;
    }


    delay(200);
    
    if ( val == 0 && c == 1) {
      digitalWrite(LEDS[1], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      c++;
      return;
    }

    delay(200);
       
     if ( val == 0 && c == 2) {
      digitalWrite(LEDS[2], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      c++;
      return;
    }  

    delay(200);
     
     if ( val == 0 && c == 3) {
      digitalWrite(LEDS[3], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      c++;
      return;
    } 

    delay(200);
      
     if ( val == 0 && c == 4) {
      digitalWrite(LEDS[4], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      c++;
      return;
    }   

    delay(200);
    
     if ( val == 0 && c == 5) {
      digitalWrite(LEDS[5], HIGH);
      Serial.println("detected 0");
      Serial.print(" c = ");
      Serial.print(c);
      Serial.println();
      c++;
      return;
    }   
 
    delay(200);

     if ( val == 0 && c == 6) {
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
      
    delay(2000);
      return;
    }   
 
}




