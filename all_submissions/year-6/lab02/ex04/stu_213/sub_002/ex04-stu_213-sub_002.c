

#include <stdio.h>

int main()
{
    long prim, seg, terc, maior, menor, meio;

    scanf("%ld %ld %ld", &prim, &seg, &terc);
    if (prim >= seg && prim >= terc)
    {
        if (seg >= terc)
        {
            maior = prim;
            meio = seg;
            menor = terc;
        }
        else
        {
            maior = prim;
            meio = terc;
            menor = seg;
        }
    }
    else if (seg >= prim && seg >= terc)
    {
        if (prim >= terc)
        {
            maior = seg;
            meio = prim;
            menor = terc;
        }
        else
        {
            maior = seg;
            meio = terc;
            menor = prim;
        }
    }
    else
    {
        if (seg >= prim)
        {
            maior = terc;
            meio = seg;
            menor = prim;
        }
        else
        {
            maior = terc;
            meio = prim;
            menor = seg;
        }   

    }
    printf("%ld %ld %ld\n", menor, meio, maior);
    return 0;
    
}