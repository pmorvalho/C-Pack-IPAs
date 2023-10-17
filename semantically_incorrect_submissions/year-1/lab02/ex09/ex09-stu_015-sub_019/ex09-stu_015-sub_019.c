#include <stdio.h>

int main(){
	
	int n, dias, horas, minutos;
	scanf("%d", &n);

	dias = n / (3600 * 24);
	n = n - dias * 3600 * 24;

	horas = n / 3600;
	n = n - horas * 3600;

	minutos = n / 60;
	n = n - minutos * 60;

	printf("%d %d %d\n", dias, horas, minutos );

return 0;
}
