#include <stdio.h>



int main() {
	int x;
	int y;
	
	scanf("%d", &x);
	
	scanf("%d", &y);
	if (y > x) {
		printf("%d\n", x);
		printf("%d\n", y);
	} else {
		printf("%d\n", y);
		printf("%d\n", x);
	}
	return 0;
}
