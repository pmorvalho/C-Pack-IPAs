
#include <stdio.h>

#define VECMAX 100

int main()
{
    int i,n, vec[VECMAX];
    scanf("%d", &n);

    if (n > VECMAX)
    {
        return 1;
    }

    for(i = 0; i<n; i++)
    {
        scanf("%d", &vec[i]);
    }

    for(i = 0; i <= n-1 ; i++)
    {
        printf("%d ", vec[i]);
    }

    return 0;
}