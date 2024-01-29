#include <SoftwareSerial.h>

SoftwareSerial miBT(10, 11); 
char DATO = 0;
int LEDROJO = 2;
void setup() {
  
  miBT.begin(38400);
  pinMode(LEDROJO, OUTPUT);
}

void loop() {
  if (miBT.available())
  DATO = miBT.read();
  if(DATO == '1')
  digitalWrite(LEDROJO, HIGH);
  if(DATO == '2')
  digitalWrite(LEDROJO, LOW);
   
  
  

}
