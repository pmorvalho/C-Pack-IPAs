#include <stdio.h>

int main(){
	
	int n, segundos, horas, minutos;
	scanf("%d", &n);

	n = n % 86400;
	horas = n / 3600;
	n = n % 3600;
	minutos = n / 60;
	segundos = n % 60;

	printf("%02d:%02d:%02d\n", horas, minutos, segundos);

return 0;
}
