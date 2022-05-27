#include <stdio.h>

int main() {
	long int soma = 0, c;

	while ((c = getchar()) != EOF) {
		if (c <= '9' && c >= '0') {
			soma += c-48;
		}
	}
	
	if ((soma % 9) == 0) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}

	return 0;

}
