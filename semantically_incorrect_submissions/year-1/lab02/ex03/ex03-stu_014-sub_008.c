#include <stdio.h>

int main() {
	int N, M;
	printf("Insira dois numeros:");
	scanf("%d %d", &N, &M);

	if (N % M == 0){
		printf("yes\n");
	}

	else {
		printf("no\n");
	}
	return 0;
}
