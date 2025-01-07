
#include <stdio.h>
#define VECMAX 100

int getmax(int vec[], int n)
{
    int i, max=vec[0];
    for(i=0;i<n;i++)
    {
        if(vec[i]>max)
        {
            max=vec[i];
        }
    }
    return max;
}

void readvec(int vec[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&vec[i]);
    }
}

void writevec(int vec[], int n)
{
    int i, j;
    int max=getmax(vec, n);
    for(i=1;i<=max;i++)
    {
        for(j=0;j<n;j++)
        {
            putchar(vec[j]>=i?'*':' ');
        }
        putchar('\n');
    }
}

int main()
{
    int vec[VECMAX];
    int n;
    scanf("%d",&n);
    readvec(vec, n);
    writevec(vec, n);
    return 0;
}