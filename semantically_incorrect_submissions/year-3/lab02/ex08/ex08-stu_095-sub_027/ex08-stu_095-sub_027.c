

#include <stdio.h>
int main()
{
    int N, i=0;
    float soma=0, media, valor;
    scanf("%d", &N);
    while(N--)
    {
        scanf("%f", &valor);
        soma+=valor;
        i++;
    }
    media=soma/i;
    printf("%.2f", media); 
    return 0;
}