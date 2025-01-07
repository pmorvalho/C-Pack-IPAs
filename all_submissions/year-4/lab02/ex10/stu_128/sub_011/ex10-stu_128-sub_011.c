
#include <stdio.h>

int main()
{
    int n, cont = 0, res = 0;
    scanf("%d",&n);
    while(n > 0)
    {
        res = res + n%10;
        n = n/10;
        cont++;
    }
    printf("%d\n%d\n",cont,res);
    return 0;
}