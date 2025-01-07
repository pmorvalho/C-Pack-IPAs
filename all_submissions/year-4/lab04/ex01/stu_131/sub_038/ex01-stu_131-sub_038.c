
#include <stdio.h>
#define VECMAX 100

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
    for(i=0;i<n;i++)
    {
        for(j=0;j<vec[i];j++)
        {
            putchar('*');
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