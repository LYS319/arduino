/*가변저항을 넣고 입력전압을 5V 인가한 아두이노 보드를 활용해 volt_value의 값을 공식을 사용하여 1초마다 시리얼 모니터에 출력*/
int vr_A0 = A0; /*아날로그 A0을 vr_A0에 지정*/
void setup() { 
  Serial.begin(9600); 
  pinMode(vr_A0, INPUT); /*A0의 핀모드를 INPUT으로 설정*/
}

void loop() {
  int adc_value = analogRead(vr_A0); /*adc_value에 A0의 analogRead값을 입력*/
  float volt_value = (adc_value/1023.0)*5; /*전압값을 구해 volt_value에 입력*/
  Serial.println(volt_value); /*volt_value 출력*/
  delay(1000);
}

