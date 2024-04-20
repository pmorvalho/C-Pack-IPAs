#include<stdio.h>

int main(void) {
	int num, start;

	
	scanf("%d", &num);

	for(start = num + 1; num > 0; num--) {
		printf("%d\n", start - num);
	}

	return 0;
}
