
#include <stdio.h>

int main()
{
    int a,b,c;
    int maior, menor, meio;

    scanf("%d %d %d", &a, &b, &c);
    maior=a;
    if(b>maior)
    {
        maior=b;
    }
    if(c>maior)
    {
        maior=c;
    }
    menor=a;
    if(b<menor)
    {
        menor=b;
    }
    if(c<menor)
    {
        menor=c;
    }

    meio=a+b+c-menor-maior;

    printf("%d %d %d\n", menor, meio, maior);

    return 0;

}