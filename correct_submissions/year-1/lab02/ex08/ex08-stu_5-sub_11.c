#include <stdio.h>

int main()
{
	int n, i;
	float media, tmp;
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%f", &tmp);
		media += tmp;
	}
	media /= n;

	printf("%.2f\n", media);

	return 0;
}
