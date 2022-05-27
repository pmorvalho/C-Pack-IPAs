#include <stdio.h>
#define SUBTRACAO 0
#define SOMA 1

int main() {
	int c, op = SOMA, nr = 0, soma = 0;

	while ((c = getchar()) != '\n') {		
		if (c == ' ') {
			if (op == SOMA) {
				soma += nr;
			}
			else {
				soma -= nr;
			}
			nr = 0;
		}
		else if (c >= '0' && c <= '9') {
			nr = nr*10 + (c-48);
		}
		else if ((c == '+' || c == '-')) {
			if (c == 43) op = SOMA;
			else op = SUBTRACAO;
		}
	
	}

	if (op == SOMA) {
		soma += nr;
	}
	else {
		soma -= nr;
	}
		
	printf("%d\n", soma);

	return 0;

}
