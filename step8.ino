//led 3개의 pwm제어값을 다르게 하여 제어하는 코드
int led_a = 2;
int led_b = 3;
int led_c = 4;

 void setup() { 
   pinMode(led_a, OUTPUT);  /*led_a의 핀모드를 OUTPUT으로 설정*/
   pinMode(led_b, OUTPUT);  /*led_b의 핀모드를 OUTPUT으로 설정*/ 
   pinMode(led_c, OUTPUT);  /*led_c의 핀모드를 OUTPUT으로 설정*/
   digitalWrite(led_a, 0);  /*led_a의 입력값을 LOW로 설정*/
   digitalWrite(led_b, 0);  /*led_b의 입력값을 LOW로 설정*/
   digitalWrite(led_c, 0);  /*led_c의 입력값을 LOW로 설정*/
}
 void loop() {
   analogWrite(led_a, 255); /*led_a의 pwm값을 255로 설정*/
   analogWrite(led_b, 20);  /*led_b의 pwm값을 20으로 설정*/
   analogWrite(led_c, 0);   /*led_c의 pwm값을 0으로 설정*/
   
}