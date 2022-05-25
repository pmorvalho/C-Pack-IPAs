#include <stdio.h>

void piramide(int N) {
	int coluna, linha;
	
	for (linha = 1; linha <= N; linha++) {
		for (coluna = 1; coluna <= N-linha; coluna++) {
			printf("  ");
		}
		for (coluna = 1; coluna <= linha; coluna++) {
			printf("%d ", coluna);
		}
		for (coluna = linha-1; coluna >= 1; coluna--) {
			printf("%d ", coluna);
		}
		for (coluna = N-linha; coluna > 0; coluna--) {
			printf("  ");
		}
		printf("\n");
	}

	return;

}

int main() {
	int N;

	scanf("%d", &N);

	piramide(N);

	return 0;
	
}
