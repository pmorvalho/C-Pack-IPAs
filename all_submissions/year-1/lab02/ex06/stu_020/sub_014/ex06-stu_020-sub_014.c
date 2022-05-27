#include <stdio.h>

int main()
{
  int n, iteracao;
  float maior, menor;
  float numero;

  scanf("%d", &n);
  scanf("%f", &maior);
  menor = maior;

  for (iteracao = 1; iteracao < n; ++iteracao)
  {
    scanf("%f", &numero);
    if (numero < menor)
      menor = numero;
    if (numero > maior)
      maior = numero;
  }

  printf("min: %f, max: %f\n", menor, maior);

  return 0;
}