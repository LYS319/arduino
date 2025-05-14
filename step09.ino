//시리얼 버퍼에서 정수 값을 입력받아 pwm 값으로 변환하여 led 밝기를 제어하는 코드
int led_a = 9;
int led_b = 3;
int led_c = 10;

 void setup() { 
   Serial.begin(9600);
   pinMode(led_a, OUTPUT);
   pinMode(led_b, OUTPUT);
   pinMode(led_c, OUTPUT);
}
 void loop() {
   if(Serial.available()) {
     int value = Serial.parseInt();
     int pwm = map(value,0,100,0,255);
     analogWrite(led_a, pwm);
     analogWrite(led_b, pwm);
     analogWrite(led_c, pwm);
   }
   
}
