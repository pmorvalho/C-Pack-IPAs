#include <stdio.h>

void cruz(int N) {
	int col, lin;
	for (lin=1;lin<=N;++lin) {
		for (col=1;col<=N;++col) {
			if ((col == (lin)) || (col==(N-lin+1))) {
				printf("*");
			} else {
				printf("-");
			} if (col!=N) {
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main() {
	int N;
	scanf("%d", &N);
	cruz(N);
	return 0;
}
