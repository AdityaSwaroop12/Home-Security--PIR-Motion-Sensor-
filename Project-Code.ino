/* For detecting a motion, tap the PIR Motion sensor and click simulate motion
  buzzer to audio detect the motion via infrared radiation detection using PIR
  Motion sensor
*/

const int BUZZER_PIN = 2;
const int pir = 19;
void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(pir, INPUT);
  Serial.begin(9600);
}
void loop() {
  const int IP = digitalRead(pir);
  Serial.println(IP);
  delay(100);
  if (IP == 1) {
    tone(BUZZER_PIN, 1000);
  }
  else {
    noTone(BUZZER_PIN);
  }
  delay(100);
}