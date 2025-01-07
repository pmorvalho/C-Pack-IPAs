#include <stdio.h>
#define VECMAX 100
int main() {
	int len, vec[VECMAX], i, max;
	max = 0;
	scanf("%d", &len);
	for (i = 0; i < len; i++) {
		scanf("%d", &vec[i]);
		if (vec[i] > max) {
			max = vec[i];
		}
	}

	
	for (; max > 0; max--) {
		for (i = 0; i < len; i++) {
			if (vec[i] > 0) {
				putchar('*');
			} else {
				putchar(' ');
			}
			vec[i]--;
		}
		putchar('\n');
	}
}
