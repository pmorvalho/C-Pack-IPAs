#include <stdio.h>

int main() {
	int n1, n2;
	printf("Insira dois numeros: \n");
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		printf("%d\n%d\n", n2, n1);
	}

	else {
		
		printf("%d\n%d\n", n1, n2);
	}
	
	return 0;
}
