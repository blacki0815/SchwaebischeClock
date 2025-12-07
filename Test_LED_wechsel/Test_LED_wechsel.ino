
#define LED1 4
#define LED2 2
int PWM_value;
int UP = 0;
int i;

void setup()
{
   // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  DDRE = B00111111;      // alle Bits als Ausgang
}

void loop()
{
 if( UP == 0)
 {
    digitalWrite(LED2, LOW);          // turn the LED on (HIGH is the voltage level)
    //PORTE = B00000001;
    for (i=0; i<255; i++)
    {
    PWM_value = i;
    analogWrite(LED1, PWM_value);    // turn the LED on (HIGH is the voltage level)
    delay(10);                        // wait for a second
    if (i==254)UP = 1;
    }
 }
 else
 {
    digitalWrite(LED2, HIGH);         // turn the LED off by making the voltage LOW
    //PORTE = B00000101;
    for (i=255; i>0; i--)
    {
    PWM_value = i;
    analogWrite(LED1, PWM_value);    // turn the LED on (HIGH is the voltage level)
    delay(10); 
    if (i==1)UP = 0;
    }
  }
 }
