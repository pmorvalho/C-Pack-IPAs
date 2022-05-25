
#include <stdio.h>

#define VECMAX 100
#define NAO 0
#define SIM 1

int main()
{

        int n, vec[VECMAX],i, j, todoszero = NAO;

        scanf("%d",&n);
        for ( i = 0; i < n; i++)
        {
                scanf("%d",&j);
                vec[i] = j;
        }
	while (todoszero!= SIM)
	{
		todoszero = SIM;

		for ( i = 0; i < n; i++)
		{
			if ( vec[i] != 0)
			{
				todoszero = NAO;
				printf("*");
				vec[i]--;
			}

			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
