#include <stdio.h>

int main() {
	int M, N;

	scanf("%d%d", &N, &M);

	if (N % M == 0) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}
