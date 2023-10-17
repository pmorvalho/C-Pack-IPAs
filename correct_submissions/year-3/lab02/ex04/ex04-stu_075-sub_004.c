


#include <stdio.h>

int main()
{
	int i, j, k;
	scanf("%d%d%d", &i, &j, &k);
	if (i <= j && i <= k) {
		if (j <= k)
			printf("%d %d %d\n", i, j, k);
		else
			printf("%d %d %d\n", i, k, j);
		return 0;
	}
	if (j <= i && j <= k) {
		if (i <= k)
			printf("%d %d %d\n", j, i, k);
		else
	    	printf("%d %d %d\n", j, k, i);
		return 0;
	}
	if (i <= j) {
		printf("%d %d %d\n", k, i, j);
		return 0;
	}
	printf("%d %d %d\n", k, j, i);
	return 0;
}