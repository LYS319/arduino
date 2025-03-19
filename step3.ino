//9번을 누르면 2번led가, 10번을 누르면 3번 led가 점멸하는 코드
int btn_9 = 9;
int btn_10 = 10;
int led_2 = 2;
int led_3 = 3;

void setup() {
  Serial.begin (9600);
  pinMode (btn_9, INPUT);
  pinMode (btn_10, INPUT);
  pinMode (led_2, OUTPUT);
  pinMode (led_3, OUTPUT);
}
void loop() {
  int btn_9_state = digitalRead(btn_9);
  int btn_10_state = digitalRead(btn_10);
  
  if (btn_9_state == 0) {
    digitalWrite (led_2, HIGH);
    delay(1000);
    digitalWrite (led_2, LOW);
    delay(1000);
  }
  if (btn_10_state == 1) {
    digitalWrite (led_3, HIGH);
    delay(1000);
    digitalWrite (led_3 , LOW);
    delay(1000);
  }
}
