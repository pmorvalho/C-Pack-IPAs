#include <stdio.h>

void piramide(int n);

int main()
{
	int n;
	scanf("%d", &n);
	piramide(n);
	return 0;
}

void piramide(int n)
{
	int i, j;
	for(i = 1; i <= n; i++) {
		for(j = i - n + 1; j <= i; j++) {
			if(j > 0)
				printf("%d", j);
			else
				printf(" ");
			printf(" ");
		}
		for(j = i - 1; j > 0; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}
}
