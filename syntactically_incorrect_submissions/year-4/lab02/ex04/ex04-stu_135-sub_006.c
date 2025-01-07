
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int maior, menor, meio;
    maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;

    menor = a;
    if (b < menor) 
        menor = b;
    if (c < menor)
        menor = c;
    
    
    meio = a;
    if ((b > menor && b < maior) || (b < menor && b > maior))
        meio = b;
    else if ((c > menor && c < maior) || (c < menor && c > maior)) 
        meio = c;

    printf("%d %d %d\n", menor, meio, maior);

    return 0;
}