//1초마다 9,10번 스위치에 입력되는 값을 교차로 시리얼 모니터에 출력
int btn_9 = 9;
int btn_10 = 10;

void setup() {
  Serial.begin (9600);
  pinMode (btn_9, INPUT);
  pinMode (btn_10, INPUT);
}
void loop() {
  int btn_9_state = digitalRead(btn_9);
  Serial.println(btn_9_state);
  delay(1000);
  int btn_10_state = digitalRead(btn_10);
  Serial.println(btn_10_state);
  delay(1000);
}
