//위와 같은 코드에서 버튼 누른 횟수를 모니터에 출력
int btn_9 = 9;
int btn_10 = 10;
int led_2 = 2;
int led_3 = 3;
int count_btn_9 = 0;
int count_btn_10 = 0;

bool btn_9_last_state = HIGH; 
bool btn_10_last_state = HIGH;
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
  
    if (btn_9_last_state == HIGH && btn_9_state == LOW) { 
    count_btn_9++;
    Serial.print("Button 9 Pressed: ");
    Serial.println(count_btn_9);
  }
  btn_9_last_state = btn_9_state; // 


  if (btn_10_last_state == HIGH && btn_10_state == LOW) {
    count_btn_10++;
    Serial.print("Button 10 Pressed: ");
    Serial.println(count_btn_10);
  }
  btn_10_last_state = btn_10_state;
  
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
