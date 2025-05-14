/*가변저항을 넣고 입력전압을 5V 인가한 아두이노 보드를 활용해 adc의 값을 1초마다 시리얼 모니터에 출력하는 코드*/
int vr_A0 = A0;  /*아날로그 입력 A0을 지정해줌*/
void setup() {
  Serial.begin(9600);  /*시리얼 통신 속도를 9600으로 지정*/
  pinMode(vr_A0, INPUT);  /*A0의 pinMode 값을 INPUT으로 설정*/
}

void loop() {
  int adc_value = analogRead(vr_A0);  /*A0의 아날로그 입력값을 읽어오고 adc_value에 지정해줌*/
  float volt_value = (adc_value/1023.0)*5;  /*ADC 값을 전압값으로 바꿔주는 공식을 사용 후에 volt_value에 값을 지정해줌*/
  Serial.println(adc_value); /*adc_value 값을 출력함*/
  delay(1000);  /*1초의 딜레이 지정*/
}
