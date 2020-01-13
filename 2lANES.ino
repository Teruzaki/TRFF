int loopVal = 0;

int loop_OUT = 10;
int loop_IN = 11;

int LEDG_IN = 12;
int LEDR_IN = 13;

int LEDG_OUT = 14;
int LEDR_OUT = 15;

void setup() {
  // put your setup code here, to run once:
  
pinMode(10, INPUT);
pinMode(11, INPUT);
/////////////////////////////////////
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(14, OUTPUT);
pinMode(15, OUTPUT);

}

int idleStatus ()
{
 digitalWrite(LEDG_OUT, HIGH);
digitalWrite(LEDG_IN, HIGH);

digitalWrite(LEDR_OUT, LOW);
digitalWrite(LEDR_IN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:


loopVal = digitalRead(loop_OUT || loop_IN);

switch(loopVal)
{
  case 11:
  
  digitalWrite(LEDG_OUT, LOW);
  digitalWrite(LEDR_OUT, HIGH);
   
  if (loop_IN == HIGH)
  {
  digitalWrite(LEDG_IN, HIGH);
  digitalWrite(LEDR_IN, LOW);
    if (loop_IN == LOW)
    {
      delay(5000);
      idleStatus();
     }
  } 
  
  break;
  
  case 12:
  digitalWrite(LEDG_IN, LOW);
  digitalWrite(LEDR_IN, HIGH);

  if (loop_OUT == HIGH)
  {
    digitalWrite(LEDG_OUT, HIGH);
    digitalWrite(LEDR_OUT, LOW);
    if (loop_OUT == LOW)
    {
      delay(5000);
      idleStatus;
    }
  }
  break;
  
  default:
  idleStatus;
  break;
}

}
