#include "yboard.h"

void led_exploration();
void loop_exploration();
void button_exploration();
void potentiometer_exploration();
void final_challenge();

int main() {
  // This function should call ONE of your functions below.
  // Uncomment or comment the lines so that just the function
  // you want to call is uncommented.

  // led_exploration();
  // loop_exploration();
  button_exploration();
  // potentiometer_exploration();
  // final_challenge();

  while (1)
    ;
}

void led_exploration() {
  // Add your code here for Part 1
  Yboard.set_led_color(3, 255, 0, 0);
  Yboard.set_led_color(15, 255, 255, 0);
}

void loop_exploration() {
  // Add your code here for Part 2
  int currentLed = 1;
  while(currentLed <= 10) {
    Yboard.set_led_color(currentLed, 255, 0, 0);
    delay(250);
    Yboard.set_led_color(currentLed, 0, 0, 0);
    currentLed++;
  }

}

void button_exploration() {
  while (true) {
    Serial.println(Yboard.get_knob());
  }
}

void potentiometer_exploration(){
  // Add your code here for the Extra 

}

void final_challenge() {
  // Add your code here for Part 4
  
}