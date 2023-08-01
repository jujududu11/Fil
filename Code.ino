
void setup(){
 #define start 3
 const uint8_t ledPins[] = {4};
 int coin = 1;
 while(coin==0){
  digitalWrite(LED_BUILTIN,1);
  delay(1000); 
  digitalWrite(LED_BUILTIN,0);
  test = start;
  if(test==LOW)
  {
   coin=1;
  }
 }
 digitalWrite(LED_BUILTIN,0);
}
void loop(){

}
