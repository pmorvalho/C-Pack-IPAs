


#include <stdio.h>

int main() {
	int i, n;
	scanf("%d", &n);
	if (n <= 0) return 1;
	for (i = 1; i <= n; i++) {
		printf("%d\n", i);
	}
	return 0;
}