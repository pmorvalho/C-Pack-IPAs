
#include <stdio.h>

int main ()
{   int num1;
    int num2;
    int num3;
    int maior;
    int meio;
    int menor;
    scanf("%d%d%d", &num1, &num2, &num3);
    menor = maior = meio = num1;
    if (num1>num2 && num1>num3)
    {
        maior = num1;
        if (num2>num3)
        {
            meio = num2;
            menor = num3;
        };
        if (num3>num2)
        {
            menor = num2;
            meio = num3;
        };      
    };
     if (num2>num1 && num2>num3)
    {
        maior = num2;
        if (num1>num3)
        {
            meio = num1;
            menor = num3;
        };
        if (num3>num1)
        {
            menor = num1;
            meio = num3;
        };      
    };
     if (num3>num1 && num3>num2)
    {
        maior = num3;
        if (num1>num2)
        {
            meio = num1;
            menor = num2;
        };
        if (num2>num1)
        {
            menor = num1;
            meio = num2;
        };      
    }
    printf("%d %d %d\n", menor, meio, maior);
    return 0;
}
