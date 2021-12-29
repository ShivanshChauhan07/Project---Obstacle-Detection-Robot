#include<LiquidCrystal.h>
int rs=7,es=8,d4=9,d5=10,d6=11,d7=12;
LiquidCrystal lcd(rs,es,d4,d5,d6,d7);
String N="Happy Birthday Daddy!! ";
String C="Happy Birthday Daddy!! ";
int len=0,i,j;

void setup(){
Serial.begin(9600);
lcd.begin(16,2);

}
void loop(){ 
 for(i=0;N[i]!='\0';i++)
 {
  len++;
 }
 
for(i=0;i<(len-1);i++)
{
  lcd.setCursor(0,0);
   lcd.print(N);
   delay(100);
  for(j=0;j<len-1-i;j++)
  {
    N[j]=N[j+1];
  }
  
delay(700);
lcd.clear();
}
N=C;
len=0;
}
