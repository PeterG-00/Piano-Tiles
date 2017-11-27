#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, 2, NEO_GRB + NEO_KHZ800);

int newLedOn = 0;
int buttonActive1 = 0;
int buttonActive2 = 0;
int buttonActive3 = 0;
int buttonActive4 = 0;

int gameAlive = true;

int voltageButtonsPlayerOne = 0; 

int playerOneLedRowOne = 0;
int playerOneLedRowTwo = 0;
int playerOneLedRowThree = 0;

int buttonRead = A0;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

int thisNote = -3;

unsigned long previousMillis = 0;
unsigned long interval = 350;
unsigned long pushTime = 0;

int randNumber = 0;
int lastNumber = 0;

int ledState [4][4] = { {0,0,0,0},
                        {0,0,0,0},
                        {0,0,0,0},
                        {0,0,0,0} };
 
unsigned long currentMillis = millis();

void setup() { Serial.begin(9600); strip.begin(); strip.show(); }

void loop() {
  voltageButtonsPlayerOne = analogRead(A0); 
  unsigned long currentMillis = millis(); 
  buttonTest();
  buttons(); 
  colorGameOver();
 
  if (currentMillis - previousMillis >= interval) { 
      newLedOn = 1;

      previousMillis = currentMillis;
      
      
      if (gameAlive == true){thisNote ++ ; Serial.println(thisNote); }
      if (thisNote >= 50){ interval = interval * 0.9 ; }  
      if (thisNote >= 100){ interval = interval * 0.9 ; thisNote = 0; }
      generator(); 
      ledStatus(); 
      colorStatus();     
  }


  
  if (gameAlive == false){thisNote = 999; Serial.println(thisNote); gameAlive = 9; Serial.println(thisNote);}

}
