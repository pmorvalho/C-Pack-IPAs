

#include <stdio.h>

int main()
{
    int a,b,c,maior,r1,r2;
    scanf("%d%d%d",&a,&b,&c);
    if(a < b)
    {
        maior = b;
        r1 = a;
    } else {maior = a; r1 = b;}
    if(maior < c)
    {
        maior = c;
        r2 = maior;
    } else r2 = c;
    if (r1 < r2) printf("%d %d %d\n",r1, r2, maior);
    else printf("%d %d %d\n", r2, r1, maior);
    return 0;
}