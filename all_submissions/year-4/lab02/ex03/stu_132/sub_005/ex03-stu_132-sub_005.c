
#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	if (x % y == 0) {
		printf("yes");
	} else {
		printf("no");
	}
	return 0;
}
