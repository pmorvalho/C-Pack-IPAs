#include <stdio.h>

void cruz(int N) {
	int l, c;

	for (l = 1; l <= N; l++) {
		for (c = 1; c <= N; c++) {
			if ((c == l) || ((c + l) == N+1)) {
				if (c == N) printf("*");
				else printf("* ");
			}
			else {
				if (c == N) printf("-");
				else printf("- ");
			}
		}
		printf("\n");
	}

	return;
}

int main() {
	int N;

	scanf("%d", &N);

	cruz(N);

	return 0;
}
