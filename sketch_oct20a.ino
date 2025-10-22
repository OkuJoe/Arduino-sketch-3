
// A binary  counter code with four leds
int led1=1; // the leds correspponds to their data pins
int led2=2; // declare and initialize my data pins variables
int led3=3;
int led4=4;
int delaytime=1000;


void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,LOW); // this is binary code for "0" i.e 0000
digitalWrite(led2,LOW); 
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(delaytime);

digitalWrite(led1,HIGH); // this is binary code for "1" i.e 0001
digitalWrite(led2,LOW); 
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(delaytime);


digitalWrite(led1,LOW); // this is binary code for "2" i.e 0010
digitalWrite(led2,HIGH); 
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(delaytime);


digitalWrite(led1,HIGH); // this is binary code for "3" i.e 0011
digitalWrite(led2,HIGH); 
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(delaytime);


digitalWrite(led1,LOW); // this is binary code for "4" i.e 0100
digitalWrite(led2,LOW); 
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
delay(delaytime);


digitalWrite(led1,HIGH); // this is binary code for "5" i.e 0101
digitalWrite(led2,LOW); 
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
delay(delaytime);


digitalWrite(led1,LOW); // this is binary code for "6" i.e 0110
digitalWrite(led2,HIGH); 
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
delay(delaytime);


digitalWrite(led1,HIGH); // this is binary code for "7" i.e 0111
digitalWrite(led2,HIGH; 
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
delay(delaytime);


digitalWrite(led1,LOW); // this is binary code for "8" i.e 1000
digitalWrite(led2,LOW); 
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
delay(delaytime);


digitalWrite(led1,HIGH); // this is binary code for "9" i.e 1001
digitalWrite(led2,LOW); 
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH;
delay(delaytime);


digitalWrite(led1,LOW); // this is binary code for "10" i.e 1010
digitalWrite(led2,HIGH); 
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
delay(delaytime);


digitalWrite(led1,HIGH); // this is binary code for "11" i.e 1011
digitalWrite(led2,HIGH; 
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
delay(delaytime);


digitalWrite(led1,LOW); // this is binary code for "12" i.e 1100
digitalWrite(led2,LOW); 
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay(delaytime);


digitalWrite(led1,HIGH); // this is binary code for "13" i.e 1101
digitalWrite(led2,LOW); 
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH;
delay(delaytime);



digitalWrite(led1,LOW); // this is binary code for "14" i.e 1110
digitalWrite(led2,HIGH); 
digitalWrite(led3,HIGH;
digitalWrite(led4,HIGH;
delay(delaytime);


digitalWrite(led1,HIGH); // this is binary code for "15" i.e 1111
digitalWrite(led2,HIGH); 
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay(delaytime);

}
