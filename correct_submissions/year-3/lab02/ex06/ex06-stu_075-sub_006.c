


#include <stdio.h>

int main() {
	float min, max, current;
	int n;
	scanf("%d", &n);
	if (n < 0) return 1;
	if (n == 0) return 0;
	scanf("%f", &current);
	min = current;
	max = current;
	for (n--; n > 0; n--) {
		scanf("%f", &current);
		if (current < min) {
			min = current;
			continue;
		}
		if (current > max) {
			max = current;
		}
	}
	printf("min: %f, max: %f\n", min, max);
	return 0;
}