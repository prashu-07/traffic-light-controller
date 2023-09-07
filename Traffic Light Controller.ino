//final project
int r1=2;
int y1=3;
int g1=4;
int r2=5;
int y2=6;
int g2=7;
int r3=8;
int y3=9;
int g3=10;
int r4=11;
int y4=12;
int g4=13;
int a1=A2;
int a2=A1;
int a3=A3;
int a4=A4;
int av1=0;
int av2=0;
int av3=0;
int av4=0;
int r=3000;
int y=1000;
int g=3000;
int du=300;
int buzzpin=A5;
void setup() {
  // put your setup code here, to run once:
  pinMode(r1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(g1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(y3,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(y4,OUTPUT);
  pinMode(g4,OUTPUT);
  pinMode(a1,INPUT);
  pinMode(a2,INPUT);
  pinMode(a3,INPUT);
  pinMode(a4,INPUT);
  pinMode(buzzpin,OUTPUT);
  Serial.begin(9600);
  red(r1,y1,g1);
  red(r2,y2,g2);
  red(r3,y3,g3);
  red(r4,y4,g4);
}

void loop() {
  // put your main code here, to run repeatedly:
//red(r1,y1,g1);
yellow(r1,y1,g1);
red(r2,y2,g2);
av1=analogRead(a1);
delay(500);
Serial.println(av1);
//Serial.println(av1);
//Serial.println(av2);
//Serial.println(av3);
//Serial.println(av4);
delay(y);
/*delay(r);
yellow(r1,y1,g1);
delay(y);*/
Serial.println("O1");
av1=analogRead(a1);
delay(500);
if(av1<du){
  digitalWrite(buzzpin,HIGH);
  green(r1,y1,g1);
  red(r2,y2,g2);
  red(r3,y3,g3);
  red(r4,y4,g4);
  delay(g);
  yellow(r1,y1,g1);
  delay(y);
  red(r1,y1,g1);//doubt
  Serial.println("I1");
  digitalWrite(buzzpin,LOW);
}av1=0;
Serial.println("O2");
av3=analogRead(a3);
delay(500);
if(av3<du){
  digitalWrite(buzzpin,HIGH);
  green(r3,y3,g3);
  red(r4,y4,g4);
  red(r1,y1,g1);
  red(r2,y2,g2);
  delay(g);
  yellow(r3,y3,g3);
  delay(y);
  red(r3,y3,g3);
  Serial.println("I2");
  digitalWrite(buzzpin,LOW);
}av3=0;
Serial.println("O3");
av4=analogRead(a4);
delay(500);
if(av4<du){
  digitalWrite(buzzpin,HIGH);
green(r4,y4,g4);
 red(r1,y1,g1);
  red(r2,y2,g2);
  red(r3,y3,g3);
delay(g);
yellow(r4,y4,g4);
delay(y);
red(r4,y4,g4);
Serial.println("I3");
digitalWrite(buzzpin,LOW);
}av4=0;
//Serial.println("i am here");
red(r1,y1,g1);
green(r2,y2,g2);
delay(g);
yellow(r2,y2,g2);
delay(y);
av2=analogRead(a2);
delay(500);
Serial.println("O4");
if(av2<du){
  digitalWrite(buzzpin,HIGH);
  green(r2,y2,g2);
  red(r1,y1,g1);
  red(r3,y3,g3);
  red(r4,y4,g4);
  delay(g);
  yellow(r2,y2,g2);
  delay(y);
  red(r2,y2,g2);
  Serial.println("I4");
  digitalWrite(buzzpin,LOW);
}av2=0;
av1=analogRead(a1);
delay(500);
Serial.println("O5");
 if(av1<du){
  digitalWrite(buzzpin,HIGH);
 green(r1,y1,g1);
   red(r2,y2,g2);
  red(r3,y3,g3);
    red(r4,y4,g4);
 delay(g);
 yellow(r1,y1,g1);
 delay(y);
 red(r1,y1,g1);
 Serial.println("I5");
 digitalWrite(buzzpin,LOW);
 }av1=0;
 av4=analogRead(a4);
 delay(500);
 Serial.println("O6");
 if(av4<du){
  digitalWrite(buzzpin,HIGH);
green(r4,y4,g4);
 red(r2,y2,g2);
  red(r3,y3,g3);
  red(r1,y1,g1);
delay(g);
yellow(r4,y4,g4);
delay(y);
red(r4,y4,g4);
Serial.println("I6");
digitalWrite(buzzpin,LOW);
}av4=0;
red(r2,y2,g2);
green(r3,y3,g3);
delay(g);
yellow(r3,y3,g3);
delay(y);
av1=analogRead(a1);
delay(500);
 Serial.println("O9");
 Serial.print("av1 value is");
 Serial.println(av1);
 if(av1<du){
  digitalWrite(buzzpin,HIGH);
green(r1,y1,g1);
red(r2,y2,g2);
red(r3,y3,g3);
red(r4,y4,g4);
 delay(g);
 yellow(r1,y1,g1);
 delay(y);
 red(r1,y1,g1);
 Serial.println("I9");
 digitalWrite(buzzpin,LOW);
 }av1=0;
av3=analogRead(a3);
delay(500);
Serial.println("O7");
if(av3<du){
  digitalWrite(buzzpin,HIGH);
  green(r3,y3,g3);
  red(r1,y1,g1);
  red(r2,y2,g2);
  red(r4,y4,g4);
  delay(g);
  yellow(r3,y3,g3);
  delay(y); 
  red(r3,y3,g3);
  Serial.println("I7");
  digitalWrite(buzzpin,LOW);
}av3=0;
 av2=analogRead(a2);
 delay(500);
 Serial.println("O9");
 if(av2<du){
  digitalWrite(buzzpin,HIGH);
green(r2,y2,g2);
red(r1,y1,g1);
red(r3,y3,g3);
red(r4,y4,g4);
 delay(g);
 yellow(r2,y2,g2);
 delay(y);
 red(r2,y2,g2);
 Serial.println("I9");
 digitalWrite(buzzpin,LOW);
 }av2=0;
 
red(r3,y3,g3);
green(r4,y4,g4);
delay(g);
yellow(r4,y4,g4);
delay(y);
Serial.println("O10");
av4=analogRead(a4);
delay(500);
if(av4<du){
  digitalWrite(buzzpin,HIGH);
  green(r4,y4,g4);
  red(r1,y1,g1);
  red(r2,y2,g2);
  red(r3,y3,g3);
  delay(g);
  yellow(r4,y4,g4);
  delay(y);
  red(r4,y4,g4);
  Serial.println("I10");
  digitalWrite(buzzpin,LOW);
}av4=0;
av2=analogRead(a2);
delay(500);
Serial.println("O11");
 if(av2<du){
  digitalWrite(buzzpin,HIGH);
 green(r2,y2,g2);
 red(r1,y1,g1);
red(r3,y3,g3);
red(r4,y4,g4);
 delay(g);
 yellow(r2,y2,g2);
 delay(y);
 red(r2,y2,g2);
 Serial.println("I11");
 digitalWrite(buzzpin,LOW);
 }av2=0;
 av3=analogRead(a3);
 delay(500);
 Serial.println("O12");
 if(av3<du){
  digitalWrite(buzzpin,HIGH);
  green(r3,y3,g3);
  red(r1,y1,g1);
  red(r2,y2,g2);
  red(r4,y4,g4);
  red(r4,y4,g4);
  delay(g);
  yellow(r3,y3,g3);
  delay(y);
  red(r3,y3,g3);
  Serial.println("I12");
  digitalWrite(buzzpin,LOW);
}
av3=0;
 
red(r4,y4,g4);
green(r1,y1,g1);
delay(g);
Serial.println("O13");
/*yellow(r1,y1,g1);
delay(y);*/
  }
void red(int r,int y,int g){
  digitalWrite(r,HIGH);
  digitalWrite(y,LOW);
  digitalWrite(g,LOW);
}
void yellow(int r,int y,int g){
  digitalWrite(r,LOW);
  digitalWrite(y,HIGH);
  digitalWrite(g,LOW);
}
void green(int r,int y,int g){
  digitalWrite(r,LOW);
  digitalWrite(y,LOW);
  digitalWrite(g,HIGH);
}
