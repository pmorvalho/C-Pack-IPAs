
#include <stdio.h>

int main() {
	int n, i;
	float num, sum, mean;
	sum = 0;
	scanf("%d", &n);
	i = n;
	while (i > 0) {
		scanf("%f", &num);
		sum += num;
		i--;
	}
	mean = sum / n;
	printf("%.2f\n", mean);
}
