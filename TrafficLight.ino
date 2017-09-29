
// 6 FRONT ROW RED LIGHT
// 5 FRONT ROW YELLOW LIGHT
//9 BACK ROW RED LIGH
// 10 BACK ROW YELLOW LIGHT
int frontRowR = 6;
int frontRowY = 5;
int backRowR = 9;
int backRowY = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(backRowR, OUTPUT);
pinMode(backRowY, OUTPUT);
pinMode(frontRowY, OUTPUT);
pinMode(frontRowR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(frontRowR, HIGH);
 delay(5000);
 digitalWrite(backRowY, HIGH);
 delay(1000);
 digitalWrite(backRowY, HIGH);
 delay(1000);
  digitalWrite(backRowY, LOW);
 digitalWrite(frontRowR, LOW);
 digitalWrite(backRowR,HIGH);
 delay(1000);
 delay(5000);
 digitalWrite(frontRowY, HIGH);
 delay(1000);
 digitalWrite(backRowR, LOW);
 digitalWrite(frontRowY,LOW);
 digitalWrite(frontRowR, HIGH);
 delay(1000);
 digitalWrite(frontRowY,LOW);
 delay(1000);
 
 
  
}
