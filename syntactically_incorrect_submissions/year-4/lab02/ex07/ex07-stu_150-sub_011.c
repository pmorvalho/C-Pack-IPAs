

#include <stdio.h>

int main()
{
    int n, res;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0) res++;
    }
    printf("%d\n",res);
    return 0;
}