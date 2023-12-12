#define trigPin 3
#define echoPin 2
int cm;
void setup() {
  
 pinMode(trigPin,OUTPUT);
 
pinMode(echoPin,INPUT);


  Serial.begin(9600);

}


void loop() {
   lerDistancia();
   Serial.println(cm);
}



void lerDistancia(){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  int distancia = pulseIn(echoPin,HIGH);
  
   cm = distancia / 58;
  }




  
