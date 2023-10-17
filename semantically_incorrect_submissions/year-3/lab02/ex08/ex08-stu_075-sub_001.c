

#include <stdio.h>

int main() {
	int n, i;
	float acum = 0, current;
	scanf("%d", &n);
	if (n < 0) return 1;
	for(i = 0; i < n; i++) {
		scanf("%f", &current);
		acum += current;
	}
	printf("%.2f", acum / n);
	return 0;
}