#include <stdio.h>

int main() {
	float N, max, min;
	
	scanf("%f", &N);
	
	max = N;
	min = N;
	
	for (int i = 1; i <= N;i++) {
		scanf("%f", &N);
		if (N > max) {
			max = N;
		}
		else if (N < min) {
			min = N;
		}
	}

	printf("min: %f, max: %f\n", min, max);
}
