#include <stdio.h>
#define ON 1
#define OFF 0

int main() {
	
	long int c, estado_0 = OFF, estado_n = OFF;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {	
			if (c != '0') {
				putchar(c);
				estado_0 = OFF;
				estado_n = ON;
			}
			else if (c == '0' && estado_n == OFF) {
				estado_0 = ON;
			}
			else {
				putchar(c);
			}
		}
		else {
			if (estado_0 == ON && estado_n == OFF) {
				putchar('0');
			}
			estado_n = OFF;
			estado_0 = OFF;
			putchar(c);
		}
	}

	return 0;
}
