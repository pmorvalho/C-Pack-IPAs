#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a < b){
		printf("%d\n%d\n", a, b);}
	else {
		printf("%d\n%d\n", b, a);}
	return 0;
}

