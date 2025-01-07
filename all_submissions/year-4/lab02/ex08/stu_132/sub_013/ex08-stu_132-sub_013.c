
#include <stdio.h>

int main() {
	int n, i;
	float num, sum, mean;
	scanf("%d", &n);
	i = n;
	while (i > 0) {
		scanf("%f", &num);
		sum += num;
		i--;
	}
	mean = sum / n;
	printf("%.2f", mean);
}
