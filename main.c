#define F_CPU 16000000UL // frequency CPU is 16MHz. By default it is 1MHz This string must be before #include, UL - unsigned long type. It must be equal to properties in SimulIDE

#include <avr/io.h> // Ubuntu/usr/lib/avr/include/avr/io.h
#include <util/delay.h>

int main(void) {
 // Set port D bits: 0 - input, 1 - output
 DDRD = 129; // 0b1000`0001
 
 while(1) {
  // Set port D bits signal level: 0 - +0V, 1 - +5V
  PORTD = 1;
  _delay_ms(10000); // wait 10 sec It will be real 10`000 millisec if only #define F_CPU (Hz) is equal to properties in SimulIDE (MHz)
  PORTD = 128;
  _delay_ms(10000);
 }
}
