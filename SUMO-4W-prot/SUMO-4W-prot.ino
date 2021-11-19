int motor1pin1 = 2;
int motor1pin2= 3;
int motor2pin1 = 4;
int motor2pin2 = 5;

int channel1 = 9; // 
int channel2 = 10;// 

//ค่าจากรีโมต
int Channel1 ; 
int Channel2 ; 

void  setup ()
{
   pinMode (motor1pin1, OUTPUT);// 
   pinMode (motor1pin2, OUTPUT);
   pinMode (motor2pin1, OUTPUT);
   pinMode (motor2pin2, OUTPUT);// 
   pinMode (channel1, INPUT);// 
   pinMode (channel2, INPUT);// 
   Serial.begin (9600); // 
}

void  loop ()
{
  Channel1 = (pulseIn (channel1, HIGH));
  Serial.println (Channel1); 

  Channel2 = (pulseIn (channel2, HIGH));
  Serial.println (Channel2);

  if (Channel1 > 1300 && Channel1 < 1800 && Channel2 < 1800 && Channel2 > 1300 ) //หยุดนิ่ง
    digitalWrite (motor1pin1, LOW);
    digitalWrite (motor1pin2, LOW);
    digitalWrite (motor2pin1, LOW);
    digitalWrite (motor2pin2, LOW);
  
  if (Channel1 > 1300 && Channel1 < 1800 && Channel2 > 1800 ) //ไปข้างหน้า
    digitalWrite (motor1pin1, HIGH); 
    digitalWrite (motor1pin2, LOW);
    digitalWrite (motor2pin1, HIGH);
    digitalWrite (motor2pin2, LOW);
    
  if (Channel1 > 1300 && Channel1 < 1800 && Channel2 < 1300 ) //ถอยหลัง
  {
    digitalWrite (motor1pin1, LOW); 
    digitalWrite (motor1pin2, HIGH);
    digitalWrite (motor2pin1, LOW);
    digitalWrite (motor2pin2, HIGH);
  }
  if ( Channel1 < 1300 && Channel2 < 1800 && Channel2 > 1300 ) //ไปซ้าย
  {
    digitalWrite (motor1pin1, LOW); 
    digitalWrite (motor1pin2, LOW);
    digitalWrite (motor2pin1, HIGH);
    digitalWrite (motor2pin2, LOW);
  }
  if (Channel1 > 1700 && Channel2 < 1800 && Channel2 > 1300 ) //ไปขวา
  {
    digitalWrite (motor1pin1, HIGH); 
    digitalWrite (motor1pin2, LOW);
    digitalWrite (motor2pin1, LOW);
    digitalWrite (motor2pin2, LOW);
  }
}
