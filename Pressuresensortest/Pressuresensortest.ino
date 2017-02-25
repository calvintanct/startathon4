int resistorfsr=10000;
int vs=5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analog = analogRead(A0);
  Serial.println(analog);
  delay(10);
  if(analog==0){
    Serial.println("False");
  }
  else{
    Serial.println("True");
  }
}
