

#include <stdio.h>

int main () {
	int n, counter = 2, i;
	scanf("%d", &n);
	if (n <= 0) return 1;
	if (n == 1) {
		printf("%d\n", 1);
		return 0;
	}
	for (i = 1; i < (n / 2); i++) {
		if ((n % i) == 0)
			counter++;
	}
	printf("%d\n", counter);
	return 0;
}