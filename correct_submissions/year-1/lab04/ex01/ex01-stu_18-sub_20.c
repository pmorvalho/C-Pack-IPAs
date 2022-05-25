#include <stdio.h>

#define VECMAX 100

int main()
{
	
	int n, vec[VECMAX],i, j;
	
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&j);
		vec[i] = j;
	}

	for (i= 0; i< n ; i++)
	{
		for ( j = 0 ; j < vec[i]; j++)
			printf("*");

		printf("\n");
	}
	return 0;
}
