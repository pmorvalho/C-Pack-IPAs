

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int count = 0;
	int sum = 0;
	while (n > 0) {
		int digit = n % 10;
		sum += digit;
		count++;
		n /= 10;
	}
	printf("%d\n", count);
	printf("%d\n", sum);
	return 0;
}