#define leda 4
#define ledv 3
#define b 5

//Para o sensor

#define trigger 7
#define eco 6

float tempo;
float dist;

const float som = 34300.0; // Velocidade do som em cm/s
const float limite1 = 10.0; // Limites de distância em cm
const float limite2 = 15.0;
const float limite3 = 10.0;
const float limite4 = 5.0;

void setup() {
pinMode (leda,OUTPUT);
pinMode (ledv,OUTPUT);
pinMode (trigger,OUTPUT);
pinMode (eco, INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trigger,LOW);
delayMicroseconds(2);

digitalWrite(trigger,HIGH);
delayMicroseconds(5);
digitalWrite(trigger,LOW);
delayMicroseconds(5);

tempo = pulseIn (eco,HIGH);

//equação da velocidade v =s/t

dist = (tempo*0.043) /2;

if (dist < limite1) {
  digitalWrite (leda, HIGH);
  digitalWrite (ledv, LOW);
  tone(b, 2500, 100);

  Serial.print ("distância = ");
  Serial.print (dist);
  Serial.println ("cm - violado ");
  delay(1000);

}
else if(dist < limite2 && dist >= limite3) {
  digitalWrite (leda, LOW);
  digitalWrite (ledv, HIGH);
  tone(b, 2000);

  Serial.print ("distância = ");
  Serial.print (dist);
  Serial.println ("cm - violado ");
  delay(1000);
}
else if(dist < limite3 && dist >= limite4) {
  digitalWrite (leda, LOW);
  digitalWrite (ledv, HIGH);
  tone(b, 2000);

  Serial.print ("distância = ");
  Serial.print (dist);
  Serial.println ("cm - violado ");
  delay(1000);
}
else {
  digitalWrite (leda, LOW);
  digitalWrite (ledv, HIGH);
  noTone(b);

  Serial.print ("distância = ");
  Serial.print (dist);
  Serial.println ("cm - seguro ");
  }
}