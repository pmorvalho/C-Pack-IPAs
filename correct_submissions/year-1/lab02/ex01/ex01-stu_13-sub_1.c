#include <stdio.h>

int main()
{
	int n,i,z,maior;
	scanf("%d %d %d",&n,&i,&z);
	maior=n;
	if (i>maior)
	maior=i;
	if (z>maior)
	maior=z;
	printf("%d\n",maior);
	return 0;
} 
