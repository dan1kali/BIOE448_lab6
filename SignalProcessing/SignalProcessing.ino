const int sensor_pin = 0;
int pulse_signal = 0;
float BPM = 0;

bool any_peak_detected = false;
bool first_peak_detected = false;
unsigned long first_pulse_time = 0;
unsigned long second_pulse_time = 0;

int upper_threshold = A;
int lower_threshold = B;

void setup() {
  Serial.begin(9600);

}

void loop() {
  pulse_signal = analogRead(sensor_pin);
  Serial.println(pulse_signal);

}
