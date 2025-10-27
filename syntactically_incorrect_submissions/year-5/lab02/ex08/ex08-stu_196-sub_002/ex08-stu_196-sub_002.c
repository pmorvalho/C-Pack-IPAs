

#include <stdio.h>

int main() {
	
	int n;

	float a[n], x, total, avg;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%f", &x);

		total += x;
		a[i] = x;
	}

	avg = total / n;
	printf("%.2f\n", avg);

	return 0;
}
