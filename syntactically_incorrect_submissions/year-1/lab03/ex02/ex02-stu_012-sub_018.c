#include <stdio.h>

void piramide(int N) {	
	int pos, x, nc, cont, col; 
	for (col=1; col<=N; col++) {
		for (pos=1, nc=N, cont=0; cont<(nc-col); ++pos) {
			printf(" ");
			if ((pos%2) == 0) {
				++cont;	
			}	
		} 
		for (x=1, pos=1; x <= col; x++, pos++) {
			if (pos%2) {
				printf("%d", x);
			} else if {
				
			}
		}
		} 
		for (pos=1, x-=2; x > 0; --x, ++pos) {
			if ((pos%2)!=0) {
				printf("%d", x);
			} else if (pos<nc) {
				printf(" ");
			}
		}
		if (col != N) {
			printf("\n");
		}
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
