const int sensor_pin = A1;
int pulse_signal = 0;
float BPM = 0;

// bool any_peak_detected = false;
// bool first_peak_detected = false;
// unsigned long first_pulse_time = 0;
// unsigned long second_pulse_time = 0;
// unsigned long pulse_period = 0;

// int upper_threshold = A; // Change values
// int lower_threshold = B;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor_pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pulse_signal = analogRead(sensor_pin);
  Serial.println(pulse_signal);

  delay(50);
  // if (pulse_signal > upper_threshold && any_peak_detected == false) {
  //   any_peak_detected = true;
  // // Do something about this peak
  //   if (first_peak_detected == false) {
  //     first_peak_detected = true; // change flag
  //     first_pulse_time = millis();
  //   } else {
  //     second_pulse_time = millis();
  //     pulse_period = second_pulse_time - first_pulse_time;
  //     first_pulse_time = second_pulse_time; //update for next calc
  //   }
  // }

  // if (pulse_signal < lower_threshold) {
  //   any_peak_detected = false;
  //   first_peak_detected = false; // change flag
  // }
}
