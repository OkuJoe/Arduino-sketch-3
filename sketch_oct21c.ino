

//understanding the arduino serial ports and print commands
int k=1;
int x=3;
int y=9;
int z;
int delaytime=750;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(k); /*it will print k bat it will be on one line so if we are to add new line we shall use " printLn"
sum z=x+y, serial.print(x or y or z)
*/
k++;
delay(delaytime);
/*
printin/print are like cout of c++
*/
}
