#include <stdio.h>



int main() {
	int x;
	int y;
	
	scanf("%d", &x);
	while (x <= 0) {
		
		scanf("%d", &x);
	}
	
	scanf("%d", &y);
	while (y <= 0) {
		
		scanf("%d", &y);
	}
	if ((x % y) == 0) {
		printf("yes\n");
	} else {
		printf("no\n");
	}
	return 0;
}
