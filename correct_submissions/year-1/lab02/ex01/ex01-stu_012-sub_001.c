#include <stdio.h>



int main() {
	int x;
	int y;
	
	scanf("%d", &x);
	
	scanf("%d", &y);
	if (y > x) {
		x = y;
	}
	
	scanf("%d", &y);
	if (y > x) {
		x = y;
	}
	printf("%d\n", x);
	return 0;
}
