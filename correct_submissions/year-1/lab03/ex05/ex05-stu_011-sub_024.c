#include <stdio.h>
#define OFF 0
#define ON 1

int main() {
	int c, estado_bs = OFF, estado_msg = OFF;

	while ((c = getchar()) != EOF) {
		if (estado_msg == ON) {
			if (estado_bs == ON) {
				putchar(c);
				estado_bs = OFF;
			}
			else if (c == '\\') {
				estado_bs = ON;
			}
			else if (c == '"') {
				estado_msg = OFF;
				putchar('\n');
			}
			else {
				putchar(c);
			}
		}
		else if (c == '"') {
			estado_msg = ON;
		}
		
	}

	return 0;
}
