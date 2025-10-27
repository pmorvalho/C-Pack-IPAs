

#include <stdio.h>

int main() {
	int n;
	int i = 2, c = 2;

	scanf("%d", &n);

	while (i <= n/2) {
		if (n % i == 0) {
			c++;
		}

		i++;
	} 

	printf("%d\n",c);

	return 0;
}
