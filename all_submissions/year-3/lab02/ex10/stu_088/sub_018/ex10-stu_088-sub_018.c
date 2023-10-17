
#include <stdio.h>

int main()
{
    int N, contador = 0, soma = 0;

    scanf("%d", &N);
    while(N > 0)
    {
        soma += N % 10;
        N /= 10;
        contador++;
    }
    printf("%d\n%d\n", contador, soma);
    
    return 0;
}