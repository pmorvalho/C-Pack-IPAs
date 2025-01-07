
#include <stdio.h>

#define VECMAX 100

int main() 
{
    int n, i, j;
    int valores[VECMAX];
    int max_valor = 0;

    scanf("%d", &n);

    
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &valores[i]);
        if (valores[i] > max_valor) 
        {
            max_valor = valores[i];
        }
    }

    
    for (i = 0; i < max_valor; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            if (valores[j] > 0) 
            {
                printf("*");
                valores[j]--;
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}