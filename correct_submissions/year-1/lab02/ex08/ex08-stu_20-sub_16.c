#include <stdio.h>

int main()
{
    int N,iteracao=0;
    float num_novo,soma;

    scanf("%d",&N);
    while (iteracao < N)
    {
        scanf("%f",&num_novo);
        soma = soma + num_novo;
        iteracao = iteracao + +1;
    }
    printf("%.2f\n",soma / N);    

  return 0;
}