
#include <stdio.h>

#define VECMAX 100


int main()
{

        int n, vec[VECMAX],i, j, maior = 0;

        scanf("%d",&n);
        for ( i = 0; i < n; i++)
        {
                scanf("%d",&j);
                vec[i] = j;
		if ( j > maior)
			maior = j;
        }
	for ( i = 0; i < maior; i++)
	{
		for ( j= 0; j< n ; j++)
		{
			if ( vec[j] == 0)
				printf(" ");
			else
			{
				printf("*");
				vec[j]--;
			}
		}
		printf("\n");
	}
	return 0;
}
