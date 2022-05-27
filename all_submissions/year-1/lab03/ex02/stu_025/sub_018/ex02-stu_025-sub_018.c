
#include <stdio.h>

void piramide(int n)
{
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 2 * (n - i); j++){
			printf(" ");}
		for(j = 2; j <= i; j++){
			printf("%d ", j);}
		for(j = i - 1; j > 1; j--){
			printf("%d ", j);}
		printf("1\n");
		}
}

int main()
{
	int n;
	scanf("%d", &n);
	piramide(n);
	return 0;
}
