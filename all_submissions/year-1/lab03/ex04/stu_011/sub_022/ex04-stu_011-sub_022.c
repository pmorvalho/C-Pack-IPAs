#include <stdio.h>

int main() {
	
	long int c = 1;

	while ((c = getchar()) != EOF) {
		if (c != '0')
			putchar(c);
	}
	return 0;
}
