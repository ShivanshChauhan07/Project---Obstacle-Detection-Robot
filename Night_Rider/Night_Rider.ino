int arr[10]={3,4,5,6,7,8,9,10,11,12};
int dt=20;


void setup() {
 Serial.begin(9600);
 for(int i=0;i<13;i++)
 {
  pinMode(arr[i],OUTPUT);
 }

}
void loop() {
OnesideofTravel(arr);
delay(dt);
reverseTravel(arr);
delay(dt);
}

void OnesideofTravel(int arr[])
{
  for(int i=0;i<10;i++)
  {
    digitalWrite(arr[i],HIGH);
    delay(dt);
    digitalWrite(arr[i+1],HIGH);
    delay(dt);
    digitalWrite(arr[i+2],HIGH);
    delay(dt);
    digitalWrite(arr[i],LOW);
    delay(dt);
    //digitalWrite(arr[i+1],LOW);
    //delay(dt);
    //digitalWrite(arr[i+2],LOW);
    //delay(dt);
  }
  return;
}

void reverseTravel(int arr[])
{
  for(int i=9;i>0;i--)
  {
     digitalWrite(arr[i],HIGH);
     delay(dt);
    digitalWrite(arr[i-1],HIGH);
    delay(dt);
    digitalWrite(arr[i-2],HIGH);
    delay(dt);
    digitalWrite(arr[i],LOW);
    delay(dt);
    //digitalWrite(arr[i-1],LOW);
    //delay(dt);
    //digitalWrite(arr[i-2],LOW);
    //delay(dt);
  }
  return;
}
