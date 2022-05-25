# include <stdio.h>

int main()
{
	int total, horas, minutos;

	scanf("%d", &total);

	horas = total/3600;
	total = total%3600;

	minutos = total/60;
	total = total%60;

	printf("%02d:%02d:%02d\n", horas, minutos, total);

	return 0;
}
