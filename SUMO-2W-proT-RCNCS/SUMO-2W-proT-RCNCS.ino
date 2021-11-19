int motorLeft = 5;// ล้อซ้าย ช่อง5 
int motorRight= 6;// ล้อขวา ช่อง6 

int channel1 = 9; //in 1
int channel2 = 10; //in 2
//ค่าจากรีโมต
int Channel1 ; 
int Channel2 ; 

void  setup ()
{
   pinMode (motorLeft, OUTPUT);
   pinMode (motorRight, OUTPUT);
   pinMode (channel1, INPUT);
   pinMode (channel2, INPUT);
   Serial.begin (9600); 
}

void  loop ()
{
  Channel1 = (pulseIn (channel1, HIGH)); // Checks the value of channel1
  Serial.println (Channel1); //Prints the channels value on the serial monitor
  if (Channel1 > 1300 && Channel1 < 1500 ) //หยุดนิ่ง นิ่งสงบ
  {
    digitalWrite (motorLeft, LOW);
    digitalWrite (motorRight, LOW);
  }
  if (Channel1 > 1500) // ขวาขึ้น เดินหน้าเต็มสูบ
  {
    digitalWrite (motorLeft, HIGH);
    digitalWrite (motorRight, HIGH);
  }
  Channel2 = (pulseIn (channel2, HIGH)); // Checks the value of channel1
  Serial.println (Channel2); //Prints the channels value value on the serial monitor
  if (Channel2 < 1300 && channel1 > 1500) // ซ้ายลง ขวาขึ้น เลี้ยวซ้าย
  {
    digitalWrite (motorLeft, LOW);
    digitalWrite (motorRight, HIGH);
  }
  if (Channel2 > 1500 && channel1 > 1500) // ซ้ายขึ้น ขวาขึ้น เลี้ยวขวา
  {
    digitalWrite (motorLeft, HIGH);
    digitalWrite (motorRight, LOW);//
  }
}
