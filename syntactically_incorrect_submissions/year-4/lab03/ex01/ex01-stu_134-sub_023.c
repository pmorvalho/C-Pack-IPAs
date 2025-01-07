

#include <stdio.h>

int main() {
	void quadrado(int N){
		int i, j;
		for (i = 1; i<=N; i++) {
			for (j = 1; j<=N; j++) {
				printf("%d", i+j-1);
				if (j != N){
					putchar('\t');
				} else {
					putchar('\n');
				}
			}	
		}	
	}
	int N = 0;
	while (N < 2) {
		scanf("%d", &N);
	}
	quadrado(N);
	return 0;
}
