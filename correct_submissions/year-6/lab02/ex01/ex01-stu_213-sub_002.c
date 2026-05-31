

#include <stdio.h>

int main()
{
    long maior, prim, seg, terc;

    scanf("%ld %ld %ld", &prim, &seg, &terc);
    maior = prim;
    if (seg > maior)
        maior = seg;
    if (terc > maior)
        maior = terc;
    printf("%ld\n", maior);
    
    return 0;
}