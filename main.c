#include <avr/io.h>

int main(void) {
  // Setting D9 to high
  //
  DDRB |= (1 << PB1); // Set pin to output
  // TCCR1 is a set of registers that control the clock and timer settings
  TCCR1A |= (1 << COM1A1) |
            (1 << WGM10); // PWM phase correct
                          // Clear OC0A on compare match when up-count
                          // Set OC0A on compare match when down-counting
  TCCR1B |= (1 << WGM12) | (1 << CS11); // 1/8th prescaler
                                        //
  // ICR1 = 0;
  OCR1A = 10; // set duty cycle (out of 255)

  while (1)
    ;
}
