/* Hide and Seek create by Palm Raksarat , Seer Pusamita in BattleDroidArena 2019 at Suannnon*/
//--------------------------
unsigned long ch1 ;
unsigned long ch2 ;
unsigned long ch3 ;
//--------------------------
int Speed_1A;
int Speed_1C;
int Speed_2A;
int Speed_2C;

void setup() {
 Serial.begin(9600);
}

void loop() {
  ch1 = pulseIn(A0,HIGH,25000);
  ch2 = pulseIn(A1,HIGH,25000);
  ch3 = pulseIn(A2,HIGH,25000);
  Speed_1A = map(ch2,1500,1900,0,100);
  Speed_1C = map(ch2,1470,950,0,100);
  Speed_2A = map(ch1,1500,1780,0,100);
  Speed_2C = map(ch1,1450,1250,0,100);
  Serial.println("\t");
 Serial.print(ch1);
  Serial.print("\t");
 Serial.print(ch2);
  Serial.print("\t");
 Serial.print(ch3);
}
