

#include <stdio.h>
#define VECMAX 100 

int max (int v[], int n) 
{
    int i, m=0;
    for(i=0; i<n; i++)
    {
        if (v[i]>m)
            m=v[i];
    }
    return m;
}

int main()
{
    int n, i, j, m, v[VECMAX]; 
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    m=max(v, n);
    for(i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            putchar(v[j]>i ? '*':' ');
        }
        putchar('\n');
    }
    return 0;

}