#include<stdio.h>

int main(void) {
	int n, count, copy, sum;

	scanf("%d", &n);

	copy = n;
	for(count = 0; copy != 0; count++) {
		copy /= 10;
	}
	printf("%d\n", count);

	for(sum = 0; count > 0; count--) {
		sum += n%10;
		n /= 10;
	}
	printf("%d\n", sum);

	return 0;
}	
