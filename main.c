#include <avr/io.h> // Ubuntu/usr/lib/avr/include/avr/io.h

int main(void)
{
 // Set port D bits: 0 - input, 1 - output
 DDRC = 64;
 // DDRB = 1; // Short cirquit if button is pushed!
 PORTB = 1; // by default DDRx = 0 and PORTx = 0. Set PORTB = 1 for reading if the button (connected with earth) is pushed
 
 while(1) // endless cycle
 {
  while (PINB == 0) // Button is pushed (short cirqut if DDRB = 1)
  {
   PORTC = 64; // Switch on the LED
  } 
  // Button isn't pushed
  PORTC = 0; // Switch off the LED
 }
}
