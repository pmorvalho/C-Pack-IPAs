#include <stdio.h>

void quadrado(int N) {
	int cont_c, cont_l=1, x=1;
	for (cont_l=1; cont_l <= N; ++cont_l) {
		for (cont_c = 1, x=cont_l; cont_c < N; ++x, ++cont_c) {
			printf("%d\t", x);
		}
		printf("%d\n", x);
	}
}

int main() {
	int N;
	scanf("%d", &N);
	while (N < 2) {
		scanf("%d", &N);
	}
	quadrado(N);
	return 0;
}
