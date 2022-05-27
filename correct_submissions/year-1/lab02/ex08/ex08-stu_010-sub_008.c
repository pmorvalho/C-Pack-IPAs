#include <stdio.h>

int main()
{
	int i, n;
	float novo, media=0;

	scanf("%d", &n);

	for (i=0; i<n; ++i)
	{
		scanf("%f", &novo);
		media = media + novo;
	}
	media = media/n;
	printf("%.2f\n", media);
	return 0;
}