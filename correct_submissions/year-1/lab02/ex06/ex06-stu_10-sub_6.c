#include <stdio.h>

int main()
{
	int i, n;
	float teste, min, max;

	scanf("%d", &n);
	
	scanf("%f", &teste);
	min = teste;
	max = teste;

	for (i=1; i<n; ++i)
	{
		scanf("%f", &teste);
		if (teste < min)
			min = teste;
		else if (teste > max)
			max = teste;

	}
	printf("min: %f, max: %f\n", min, max);
	return 0;
}