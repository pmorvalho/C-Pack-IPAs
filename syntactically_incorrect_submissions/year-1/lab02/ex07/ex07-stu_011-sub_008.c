#include <stdio.h>

int divisores(n, x) {
	if (n == x) {
		return 1;
	}
	if (n % x == 0) {
		return 1 + divisores(n, x+1);
	}
	else {
		return divisores(n, x+1);
	}
}

int main() {

	int N;
	
	scanf("%d", &N);

	printf("%d\n", divisores(N, 1));

	return 0;
}
