#include <avr/io.h>

int main(void) {
  // Setting D9 to high
  //
  DDRB |= (1 << DDB1);
  PORTB |= (1 << PORTB1);
}
