int lightpin=A0;
int red=10;
int green=12;
int value;
float actual;
void setup() {
Serial.begin(9600);
pinMode(lightpin,INPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
}
void loop() {
  Serial.print("The voltage is");
 value=analogRead(lightpin);
 actual=(5./1023.)*value;
  Serial.println(actual);
 if(value>=200)
 {
  digitalWrite(green,1);
  digitalWrite(red,0);
 }
 else 
 {
  digitalWrite(red,1);
  digitalWrite(green,0);
 }
 delay(500);
}
