
#include <stdio.h>

int main() {
	int num, divs, i;
	scanf("%d", &num);
	if (num == 1) {
		divs = 1;
	} else {
		divs = 2;
	}
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			divs++;
		}
	}
	printf("%d\n", divs);
	return 0;
}
