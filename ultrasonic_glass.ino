// Define pins
const int trigPin = D5;
const int echoPin = D6;
const int buzzerPin = D8;  // Pin connected to the buzzer & led

// Declare Variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);    // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);     // Sets the echoPin as an Input
  pinMode(buzzerPin, OUTPUT);  // Sets the buzzerPin as an Output
  Serial.begin(9600);          // Starts the serial communication
}

void loop() {

  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance = duration * 0.034 / 2;

  // Prints the distance on the Serial Monitor [ with baud rate 9600 ]
  Serial.print("Distance: ");
  Serial.println(distance);

  while (duration < 2353) {
    Serial.println(duration);
    int i = duration / 20;
    digitalWrite(buzzerPin, HIGH);
    delay(i / 2);
    digitalWrite(buzzerPin, LOW);
    delay(i);
    break;
  }

  // delay(1000);
}
