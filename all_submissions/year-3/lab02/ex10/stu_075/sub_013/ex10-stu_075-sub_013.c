


#include <stdio.h>

int main() {
	int n, counter = 0, sum = 0;
	scanf("%d", &n);
	if (n <= 0) return 1;
	while (n != 0) {
		counter++;
		sum += n % 10;
		n /= 10;
	}
	printf("%d\n%d\n", counter, sum);
	return 0;
}