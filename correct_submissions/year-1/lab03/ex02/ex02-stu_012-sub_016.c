#include <stdio.h>

void piramide(int N) {
    int x, pos, cn=N, col;
    for (col=1; col<=N; col++, --cn) {
        for (pos=1 ; pos<((2*cn)-1) ; ++pos) {
            printf(" ");
        }
	for (x=1;x<=col;++x) {
		if (col == 1) {
			printf("%d", x);
		} else { 
			printf("%d ", x);
		}
        }
        for (x=x-2;x>=1;--x) {
            printf("%d", x);
            if (x != 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
	int N;
	scanf("%d", &N);
	while (N < 2) {
		scanf("%d", &N);
	}
	piramide(N);
	return 0;
}
