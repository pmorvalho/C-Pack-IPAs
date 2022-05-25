#include <stdio.h>

int main()
{
	int n,i,z;
	scanf("%d",&n);
	scanf("%d\n",&i);
	scanf("%d\n",&z);
	if (n>i && n>z)
	printf("%d\n",n);
	if (i>z)
	printf("%d\n",i);
	else
	printf("%d\n",z);
	return 0;
} 
