#include <stdio.h>

int main() {
	int N, hrs, min;

	scanf("%d", &N);

	hrs = N / 360;
	N = N % 360;
	min = N / 60;
	N = N % 60;

	printf("%02d:%02d:%02d\n", hrs, min, N);

	return 0;
}
