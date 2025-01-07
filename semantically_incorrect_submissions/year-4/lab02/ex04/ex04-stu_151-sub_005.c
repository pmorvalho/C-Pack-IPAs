#include <stdio.h>

int main() {
	int x, y, z, maior, meio, menor;
	
	scanf("%d%d%d", &x, &y, &z);
	
	(x > y && x > z) ? (maior = x, ((y > z) ? (meio = y, menor = z) : (meio = z, menor = y))) : 
	((y > z && y > x) ? (maior = y, ((z > x) ? (meio = z, menor = x) : (meio = x, menor = z))) : 
	((maior = z, ((x > y) ? (meio = x, menor = y) : (meio = y, menor = x)))));
	
	printf("%d %d %d", menor, meio, maior);
	
	return 0;
}
