
#include <stdio.h>

void quadrado(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=i; j<i+n-1; j++) {
			printf("%d\t", j);
		}
		printf("%d\n", i + n - 1);
	}
}

int main() {
	int n;

	scanf("%d", &n);
	quadrado(n);

	return 0;
}