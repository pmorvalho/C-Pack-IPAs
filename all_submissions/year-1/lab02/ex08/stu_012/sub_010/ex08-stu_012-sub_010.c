#include <stdio.h>



int main() {
	float x;
	float total;
	float cont;
	float res=0.0;
	
	scanf("%f", &total);
	while (total <= 0) {
		
		scanf("%f", &total);
	}
	cont = total;
	while (cont > 0) {
		
		scanf("%f", &x);
		res += x;
		cont -= 1;
	}
	res = res * (1 / total);
	printf("%.2f\n", res);
	return 0;
}
