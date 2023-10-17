#include <stdio.h>

#define NO_INSERT 0
#define INSERT 1
#define ALWAYS_INSERT 2



int main() {
	int c, estado = NO_INSERT;

	while ((c = getchar()) != '\n') {
		if (c == ' ' && estado == NO_INSERT) {
			printf("\n");
			continue;
		}

		if (estado != ALWAYS_INSERT && (c == '\\' || c == '"'))
			estado = NO_INSERT;
		else if (estado != ALWAYS_INSERT)
			estado = INSERT;

		if (estado == INSERT)
			putchar(c);

		if (estado == ALWAYS_INSERT) {
			putchar(c);
			estado = INSERT;
		}

		if (c == '\\')
			estado = ALWAYS_INSERT;
	}
	printf("\n");

	return 0;
}
