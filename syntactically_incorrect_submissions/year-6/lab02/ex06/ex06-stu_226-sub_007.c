

#include <stdio.h>

int main() {
	int N;

	scanf("%d", &N);

	float num, min, max;

	scanf("%f", &num);
	min = num;
	max = num;

	for (int i = 1; i < N; i++) {
		scanf("%f", &num);
		if (num < min) {
			min = num;
		}
		if (num > max) {
			max = num;
		}
	}

	printf("min: %f, max: %f\n", min, max);
	return 0;
}