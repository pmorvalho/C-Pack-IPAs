#include <stdio.h>

int main() {
	int x, y, z, maior;
	
	scanf("%d %d %d", &x, &y, &z);
	
	maior = (x>y && x>z) ? x : ((y>z) ? y : z);
	
	printf("%d", maior);
	
	return 0;
} 
