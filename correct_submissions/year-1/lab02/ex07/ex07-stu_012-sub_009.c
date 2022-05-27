#include <stdio.h>



int main() {
	int x;
	int cont=1, res=0;
	
	scanf("%d", &x);
	while (x <= 0) {
		
		scanf("%d", &x);
	}
	while (cont <= x) {
		if (x % cont == 0) {
			res += 1;	
		}
		cont += 1;
	}
	printf("%d\n", res);
	return 0;
}
