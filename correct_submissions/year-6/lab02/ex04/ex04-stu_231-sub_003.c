
#include <stdio.h>

int main()
{
    int a, b, c, menor, maior1, maior2;
    scanf("%d%d%d", &a, &b, &c);
    menor = a;
    maior1 = b;
    maior2 = c;
    if (b < menor){
        menor = b;
        maior1 = a;
        maior2 = c;
    }
    if (c < menor){
        menor = c;
        maior1 = a;
        maior2 = b;
    }
    printf("%d ", menor);
    if (maior1 > maior2)
        printf("%d %d\n", maior2, maior1);
    else
        printf("%d %d\n", maior1, maior2);
    return 0;
}