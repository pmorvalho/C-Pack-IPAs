#include <stdio.h>

#define INFERIOR 1
#define PASSO 1

int main()
{
	int n, contador;
	float media, num;
	scanf("%d", &n);

	for (contador = INFERIOR; contador <= n; contador += PASSO)
	{
		scanf("%f", &num);
		media += num;
	}
	media /= n;
	printf("%.2f\n", media);
	return 0;
}

