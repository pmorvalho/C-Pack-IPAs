#include <stdio.h>

int main(){
	
	int n, dias, horas, minutos;
	scanf("%d", &n);




	horas = n / 3600;
	n = n%3600;

	minutos = n / 60;
	dias = n % 60;

	printf("%02d:%02d:%02d\n", horas, minutos, dias);

return 0;
}
