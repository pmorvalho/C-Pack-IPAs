

#include <stdio.h>

int main ()
{
    int num_v, n;
    float val, soma = 0 , media;

    scanf("%d", &num_v);
    n = num_v;
    
    while (n--)
    {
        scanf("%f", &val);
        soma += val;
    }

    media = soma / num_v;
    printf("%.2f\n", media);
    return 0;
}