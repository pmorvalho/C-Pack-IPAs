#include <stdio.h>

void quadrado(int N){
	int coluna, linha;

	for (linha = 1; linha <= N; linha++) {
		for (coluna = linha; coluna <= linha+N-1; coluna++) {
			if (coluna != linha+N-1)
				printf("%d\t", coluna);
			else
				printf("%d\n", coluna);
		}
	}

	return;
}

int main(){
	int N;

	scanf("%d", &N);

	quadrado(N);

	return 0;
}
