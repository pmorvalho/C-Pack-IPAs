#include <stdio.h>


int main() {
	int X,Y,Z;

	scanf("%d%d%d", &X, &Y, &Z);
	if (X >= Y && X >= Z) {
		printf("%d\n", X);
	}
	else if (Y >= X && Y >= Z) {
		printf("%d\n", Y);	
	}
	else {
		printf("%d\n", Z);
	}

	return 0;
}
