#include <stdio.h>

int main() 
{
	int numnum, count;
	float min, max, num;

	scanf("%d", &numnum);

	scanf("%f", &num);

	count = 1;
	min = num;
	max = num;

	while(count < numnum) 
	{
		scanf("%f", &num);
		count++;

		if (num > max) {
			max = num;
		} 

		if (num < min) {
			min = num;
		}
	}

	printf("min: %f, max: %f\n", min, max);

	return 0;
}
