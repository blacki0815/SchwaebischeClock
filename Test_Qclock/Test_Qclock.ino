
#define ZEILE1 22
#define ZEILE2 24
#define ZEILE3 26
#define ZEILE4 28
#define ZEILE5 30
#define ZEILE6 31
#define ZEILE7 32
#define ZEILE8 33
#define ZEILE9 34
#define ZEILE10 35

#define SPALTE1 2
#define SPALTE2 3
#define SPALTE3 5
#define SPALTE4 6
#define SPALTE5 7
#define SPALTE6 8
#define SPALTE7 8
#define SPALTE8 9
#define SPALTE9 10
#define SPALTE10 11
#define SPALTE11 12

int PWM_value;
int UP = 0;
int i;  // Zeilen zähler
int j;  // Spalten zähler

void setup()
{
   // initialize digital pin LED_BUILTIN as an output.
  pinMode(ZEILE1, OUTPUT);
  pinMode(ZEILE2, OUTPUT);
  pinMode(ZEILE3, OUTPUT);  
  pinMode(ZEILE4, OUTPUT);
  pinMode(ZEILE5, OUTPUT);
  pinMode(ZEILE6, OUTPUT);
  pinMode(ZEILE7, OUTPUT);
  pinMode(ZEILE8, OUTPUT);
  pinMode(ZEILE9, OUTPUT);
  pinMode(ZEILE10, OUTPUT);

  pinMode(SPALTE1, OUTPUT);
  pinMode(SPALTE2, OUTPUT);
  pinMode(SPALTE3, OUTPUT);
  pinMode(SPALTE4, OUTPUT);
  pinMode(SPALTE5, OUTPUT);
  pinMode(SPALTE6, OUTPUT);
  pinMode(SPALTE7, OUTPUT);
  pinMode(SPALTE8, OUTPUT);
  pinMode(SPALTE9, OUTPUT);
  pinMode(SPALTE10, OUTPUT);
  pinMode(SPALTE11, OUTPUT);

  DDRE = B00111111;      // alle Bits als Ausgang
  PWM_value = 200;
}

void loop()
{
for (i = 1; i < 11; i++)
{
 for (j = 1; j < 12; j++)
 {
   digitalWrite(SPALTEj, HIGH);          // turn the LED on (HIGH is the voltage level)
   digitalWrite(ZEILEi, HIGH);          // turn the LED on (HIGH is the voltage level)
   delay(1000);                        // wait for a second
 }
} 
//    digitalWrite(ZEILE1, HIGH);          // turn the LED on (HIGH is the voltage level)
//    digitalWrite(ZEILE2, HIGH);          // turn the LED on (HIGH is the voltage level)
    analogWrite(SPALTE1, PWM_value);    // turn the LED on (HIGH is the voltage level)
//    digitalWrite(SPALTE1, HIGH);          // turn the LED on (HIGH is the voltage level)
    delay(1000);                        // wait for a second
    digitalWrite(ZEILE1, LOW);          // turn the LED on (HIGH is the voltage level)
    digitalWrite(ZEILE2, HIGH);          // turn the LED on (HIGH is the voltage level)
    delay(1000);                        // wait for a second
    digitalWrite(ZEILE1, HIGH);          // turn the LED on (HIGH is the voltage level)
    digitalWrite(ZEILE2, LOW);          // turn the LED on (HIGH is the voltage level)
  //  delay(1000);                        // wait for a second

 }
