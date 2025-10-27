

#include <stdio.h>

int main() {
	int x,y,z;
	int max, mid, min;

	scanf("%d%d%d", &x, &y, &z);

	if (x >= y) {
		max = x;
		mid = y;
	} else {
		max = y;
		mid = x;
	}

	if (z > max) {
		mid = max;
		max = z;
	}
	else if (z > mid) {
		mid = z;
	}

	min = (x+y+z) - max - mid;

	printf("%d %d %d\n", min, mid, max);

	return 0;
}
