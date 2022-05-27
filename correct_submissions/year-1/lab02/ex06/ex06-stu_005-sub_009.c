#include <stdio.h>

int main()
{
	int n, i;
	float min, max;
	scanf("%d", &n);

	scanf("%f", &min);
	max = min;

	for(i = 1; i < n; i++)
	{
		float c;
		scanf("%f", &c);
		if(c > max) max = c;
		else if(c < min) min = c;
	}

	printf("min: %f, max: %f\n", min, max);

	return 0;
}
