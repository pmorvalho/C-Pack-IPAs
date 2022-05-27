#include <stdio.h>

void piramide(int n)
{
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 2 * (n - i); j++){
			printf(" ");}
		for(j = 1; j <= i; j++){
			printf("%d ", j);}
		for(j = i - 1; j > 0; j--){
			if (j == 1){
				printf("1");}
			else{
				printf("%d ", j);}}
		printf("\n");
		}
}

int main()
{
	int n;
	scanf("%d", &n);
	piramide(n);
	return 0;
}
