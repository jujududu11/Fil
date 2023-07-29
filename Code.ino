
void setup(){
 const int BP = 3;
 pinMode(BP, INPUT);
 int test = digitalRead(BP);
 int coin = 1;
 while(coin==0){
  digitalWrite(LED_BUILTIN,1);
  delay(1000); 
  digitalWrite(LED_BUILTIN,0);
  test = digitalRead(BP);
  if(test==LOW)
  {
   coin=1;
  }
 }
 digitalWrite(LED_BUILTIN,0);
}
void loop(){

}
