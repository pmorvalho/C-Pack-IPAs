#include <stdio.h>



int main() {
	int x;
	int y=1;
	
	scanf("%d", &x);
	while (x <= 0) {
		
		scanf("%d", &x);
	}
	while (y <= x) {
		printf("%d\n", y);
		y += 1;
	}
	return 0;
}
