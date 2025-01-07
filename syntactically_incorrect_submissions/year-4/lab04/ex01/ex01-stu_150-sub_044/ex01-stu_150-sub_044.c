

#include <stdio.h>
#define VECMAX 100

int main()
{
    int n,count;
    scanf("%d", &n);
    if (n <= VECMAX)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&count);
            for(int j = 0; j< count; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}