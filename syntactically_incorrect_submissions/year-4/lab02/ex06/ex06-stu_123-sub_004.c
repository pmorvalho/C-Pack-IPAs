#include <stdio.h>

int main() {
  double valor;
  double maior, menor;
  int n;

  
  scanf("%d", &n);
  if (n > 0) {
    scanf("%lf", &maior);
    menor = maior;

    for (int i = 1; i < n; i++) {
      scanf("%lf", &valor);
      if (valor > maior)
        maior = valor;
      else if (valor < menor)
        menor = valor;
    }
    printf("min: %f, max: %f\n", menor, maior);
  }
  return 0;
}
