#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
	int c, estado, zero_check;
	while ((c=getchar()) != EOF) {
		if ( c == '\n' || c == ' ' ) {
			if (zero_check==DENTRO) {
				putchar('0');
				putchar(' ');
				zero_check=FORA;
			} else if (estado==DENTRO) {
				putchar(' ');
				estado=FORA;
			}
		} else {
			if (c=='0') {
				if (zero_check==FORA && estado==FORA) {
					zero_check = DENTRO;
				} else if (estado == DENTRO) {
					putchar('0');
				}
			} else {
				estado=DENTRO;
				if (zero_check == DENTRO) {	
					zero_check = FORA;
				}
				putchar(c);
			}
		}
	}
	return 0;
}
