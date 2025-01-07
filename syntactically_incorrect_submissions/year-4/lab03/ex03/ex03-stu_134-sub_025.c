

#include <stdio.h>

int main() {
	void cruz(int N){
		int i, j;
		for (i=1; i<=N; i++) {
			for (j = 1; j <= N; j++) {
				if (i == j || i+j-1 == N){
					putchar('*');
				} else {
					putchar('-');
				}
				if (j != N){
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	int N;
	scanf("%d",&N);
	cruz(N);
	return 0;
}
