// reading analog voltage
int reading_pin=A3; // here we declare and initialize our analog pin 
int delay_time=500;
int voltage_reader=0; // to read the voltage

void setup() {
  // put your setup code here, to run once:
pinMode(reading_pin,INPUT);
Serial.begin(9600); // set up the serial monitor such that we can read the voltage


}

void loop() {
  // put your main code here, to run repeatedly:
voltage_reader=analogRead(reading_pin);
Serial.println(voltage_reader);
delay(delay_time);
}
