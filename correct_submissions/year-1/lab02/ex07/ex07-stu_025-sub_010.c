#include <stdio.h>
int main()
{
	int n;
	int d = 1, div = 0;
	scanf("%d\n", &n);
	while (d <= n){
		if (n % d == 0){
			div += 1;}
		d += 1;}
	printf("%d\n", div);
	return 0;
}
