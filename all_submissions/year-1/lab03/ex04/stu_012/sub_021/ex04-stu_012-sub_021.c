#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
	long int num;
	int c, estado=FORA;
	while ((c=getchar()) != EOF) {
		if (c == ' ' || c == '\n') {
			if (estado == DENTRO) {
				printf("%ld ", num);
				num = 0;
				estado = FORA;
			}
		} else {
			num = (num*10) + (c - '0');
			if (estado == FORA) {
				estado = DENTRO;
			}
		}
	}
	if (estado==DENTRO) {
		printf("%ld", num);
	} printf("\n");
	return 0;
}
