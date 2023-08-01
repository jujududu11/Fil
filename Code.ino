
void setup(){
 #define start 3
 const uint8_t ledPins[] = {4};
 int coin = 0;
 while(coin==0){
  digitalWrite(LED_BUILTIN,1);
  delay(1000); 
  digitalWrite(LED_BUILTIN,0);
  if(start==LOW)
  {
   coin=1;
   ledPins[0] = 1
  }
 }
 digitalWrite(LED_BUILTIN,0);
}
void loop(){

}
