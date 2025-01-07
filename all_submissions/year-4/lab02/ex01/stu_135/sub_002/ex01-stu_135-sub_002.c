
#include <stdio.h>

int main1()
{
    int a, b, c;
    int maior;
    
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    printf("%d\n", maior);
    return 0;
}

int main()
{
    int x1, x2, x3;

    scanf("%d %d %d", &x1, &x2, &x3);

    return printf("%d\n",
    (x1 > x2 && x1 > x3) ? x1 : 
    ((x2 > x1 && x2 > x3) ? x2 : x3)) == EOF;
}