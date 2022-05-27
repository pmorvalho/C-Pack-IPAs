#include <stdio.h>
#define DEZ 10

int main()
{   
    int n,conta_dig=0,soma=0,digito;
    scanf("%d",&n);
    
    while (n > 0)
    {
        digito = n % 10;
        n = n / 10; 
        soma = soma + digito;
        conta_dig ++;
        
    }

    printf("%d\n%d\n",conta_dig,soma);
    return 0;
}