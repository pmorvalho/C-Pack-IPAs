

#include <stdio.h>

int main() {
	int n;

	float x;
	float max = 1.5F, min = 3.0F;

	scanf("%d", &n);

	for (int i=0; i<n; i++)
	{
		scanf("%f", &x);

		if (x >= max) max = x;

		if (x <= min) min = x;
	}

	printf("min: %f, max: %f\n", min, max);

	return 0;
}

