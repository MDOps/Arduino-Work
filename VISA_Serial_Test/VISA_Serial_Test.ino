int Delay = 50;
int i = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

    Serial.println(i);
    i = (i+1)%10;
    delay(Delay);
}
