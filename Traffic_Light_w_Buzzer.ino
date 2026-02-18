const int buzzerPIN = 8;
int LED_GREEN = 13;
int LED_YELLOW = 12;
int LED_RED= 11;

int greenDuration = 5000;
int yellowDuration = 3000;
int redDuration = 5000;

void setup() {
  pinMode(buzzerPIN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop() {
  //green
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, HIGH);
  noTone(buzzerPIN);
  delay(greenDuration);

  //yellow
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, HIGH);
  digitalWrite(LED_RED, LOW);

  //the beeps (3 times)
  tone(buzzerPIN, 523);
  delay(500);
  noTone(buzzerPIN);
  delay(500);

  tone(buzzerPIN, 523);
  delay(500);
  noTone(buzzerPIN);
  delay(500);

  tone(buzzerPIN, 523);
  delay(500);
  noTone(buzzerPIN);
  delay(500); 
  
  //red
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_RED, HIGH);
  noTone(buzzerPIN);
  delay(redDuration);
}