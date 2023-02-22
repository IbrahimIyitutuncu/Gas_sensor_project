#define led 8    // I defined the 8th pin as led output.
#define buzzer 7   // I defined the 7th pin as buzzer output.
#define sensor A0   // I defined the A0 pin as sensor.
const int limit=800;   // I set a limit value to say Ardunio when to react.
int sensor_value=0;     //  To record measuring values I created a integer value.

void setup() {
  Serial.begin(9600);     // I started the communication.
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
  sensor_value=analogRead(sensor);          //  Every measuring values from A0 pin are recorded.
  Serial.println("The value of measuring= ");
  Serial.println(sensor_value);
  if(sensor_value >limit)                   // I compared the these recording values with my limit value.
  {
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
  }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
  }
  delay(250);

}
