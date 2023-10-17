


#include <stdio.h>

#define VECMAX 100

int main()
{
    int s[VECMAX],i,n,j = 0;

    scanf("%d",&n);

    for (i = 0; i < n ;i++)
    {
        scanf("%d",&s[i]);
        j = 0;
        while(j != s[i])
        {
            putchar('*');
            j++;
        }
        putchar('\n');
    }
    return 0;
}