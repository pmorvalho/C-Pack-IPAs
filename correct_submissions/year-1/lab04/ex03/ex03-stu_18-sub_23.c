#include <stdio.h>

#define VECMAX 100

int main()
{

        int n, vec[VECMAX],i, j, maior = 0, espacos[VECMAX];

        scanf("%d",&n);
        for ( i = 0; i < n; i++)
        {
                scanf("%d",&j);
                vec[i] = j;
		
		if ( j > maior)
			maior = j;
        }
        
	for ( i = 0 ; i < n; i++)
		espacos[i] = maior - vec[i];

	for ( i = 0; i < maior ;  i++)
	{
		for (j= 0; j< n ; j++)
		{
			if (espacos[j] != 0)
			{
				printf(" ");
				espacos[j]--;
			}

			else
				printf("*");
		}
		printf("\n");
	}
		
        return 0;
}


