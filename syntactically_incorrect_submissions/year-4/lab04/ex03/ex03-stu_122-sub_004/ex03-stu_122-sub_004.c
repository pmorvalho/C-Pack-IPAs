
#include <stdio.h>
#define VECMAX 100

int main ()
{
    int n,i,j,max = 0,x;
    scanf("%d",&n);
    if(n >= VECMAX)
        return 1;

    int v[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
        if (v[i] > max)
            max = v[i];
    }
    x = n;
    for(i = max; i < max; i--){
        for(j = 0; j < v[i]; j++)
        {
            putchar(v[j] >= x?'*':' ');
        }
        x--;
        putchar('\n');
    }
    return 0;
}