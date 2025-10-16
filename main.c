#include <avr/io.h>

int main(void) {
 // Set port D bits: 0 - input, 1 - output
 DDRD = 1;
 // Set port D bits signal level: 0 - +0V, 1 - +5V
 PORTD = 1;
}
