

#include <stdio.h>

int main() {
	int N, num_digits = 0, digit, sum = 0;
	scanf("%d", &N);
	while (N > 0) {
		sum = sum + N % 10;
		num_digits++;
		N /= 10;
	}
	printf("%d\n", num_digits);
	printf("%d\n", sum);
}
