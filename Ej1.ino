int ledPin = 8;

int sensorPin = A0;

float temperature = 0;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);

  temperature = (sensorValue * 5.0 / 1023.0) * 100;

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

 
  if (temperature < 20) {
    digitalWrite(ledPin, LOW);  
  } else if (temperature >= 20 && temperature < 30) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, HIGH); 
  }

  delay(1000);
}
