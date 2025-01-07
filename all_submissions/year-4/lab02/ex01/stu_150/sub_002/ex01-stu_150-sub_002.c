

#include <stdio.h>

int main()
{
    int a, b, c;
    int maior;
    scanf("%d %d %d",&a, &b, &c);
    if(a < b)
    {
        maior = b;
    } else maior = a;
    if(maior < c)
    {
        maior = c;
    }
    printf("%d\n",maior);
    return 0;
}