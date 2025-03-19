//아두이노 2초마다 LED 교차로 점멸
int led_2 = 2;
int led_3 = 3;

void setup() {
  Serial.begin(9600);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}
void loop() {
  digitalWrite(led_2, 1);
  delay(2000);
  digitalWrite(led_2,0);
  delay(2000);
  digitalWrite(led_3, 1);
  delay(2000);
  digitalWrite(led_3, 0);
  delay(2000);
}
동시에 점멸
int led_2 = 2;
int led_3 = 3;

void setup() {
  Serial.begin(9600);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}
void loop() {
  digitalWrite(led_2, 1);
  digitalWrite(led_3, 1);
  delay(2000);
  digitalWrite(led_2 , 0);
  digitalWrite(led_3 ,0);
  delay(2000);
}
