
#include <stdio.h>

#define VECMAX 100

int main()
{
    int s, i,p,k=0;
    scanf("%d",&s);

    for (i = 0; i < s; i++)
    {
        scanf("%d",&p);
        while (k < p)
        {
            printf("*");
            k++;
        }
        k = 0;
        printf("\n");
    }
    return 0;
}