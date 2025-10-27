

#include <stdio.h>

int main() {
	int n, digit, total = 0, count = 0;

	scanf("%d", &n);

	while (n > 0) {
		digit = n % 10;
		
		count++;
		total += digit;

		n /= 10;
	}

	printf("%d\n%d\n", count, total);

	return 0;
}
