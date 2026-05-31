
#include <stdio.h>

int main()
{
    int a, b, maior, menor;
    scanf("%d%d", &a, &b);
    maior = a;
    menor = b;
    if (b > a){
        maior = b;
        menor = a;
    }
    printf("%d\n%d\n", maior, menor);
}
