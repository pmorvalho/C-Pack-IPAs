
#include <stdio.h>

int main()
{
    int n,a;
    int cont = 0;
    scanf("%d",&n);
    a = n/2;
    for (int i= 1; i <= a; i++)
    {
        if (n%i==0)
        {
            cont++;
        }
    }
    cont++;
    printf("%d\n",cont);
    return 0;
}