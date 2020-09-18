 
void setup()
{
pinMode(12,OUTPUT);    
pinMode(2,INPUT);
attachInterrupt(0,openAirBag,RISING);
}
void loop(){
}
void openAirBag()
{
digitalWrite(12,HIGH);
}

