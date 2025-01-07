
#include <stdio.h>
#define VECMAX 100

int main()
{
    int n,i,j,max = 0;
    scanf("%d",&n);
    if(n >= VECMAX)
        return 1;
    int v[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
        printf("%d\n",v[i]);
        if(v[i] > max)
            max = v[i];
    }
    for(i = 0; i < max; i++)
    {
        for(j = 0; j < n; j++)
            putchar(v[j] > i ? '*':' ');
        putchar('\n');
    }
    return 0; 
}