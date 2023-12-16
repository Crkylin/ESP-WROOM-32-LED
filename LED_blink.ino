#define LED 18
 
void setup() {
  pinMode(LED, OUTPUT);
}
 
void loop() {
  digitalWrite(LED,HIGH); //高电平
  delay(1000); //等待1000毫秒
  digitalWrite(LED, LOW); //低电平
  delay(1000); //等待1000毫秒
}
