

#include <stdio.h>

int main()
{
    int num1, num2, num3, maior;

    scanf("%d %d %d", &num1, &num2, &num3);
    maior = num1;
    if (num2 > maior)
    {
        maior = num2;
    }
    
    else if (num3 > maior)
    {
        maior = num3 ;
    }
    
    
}

 