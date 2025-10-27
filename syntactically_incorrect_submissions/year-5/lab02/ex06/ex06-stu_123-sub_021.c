
#include <stdio.h>

int main() {
  double valor;
  double maior, menor;
  int n;

  
  scanf("%d", &n);
  if (n > 0) {
    scanf("%lf", &maior);
    menor = maior;

    
    while (--n) {
      scanf("%lf", &valor);
      if (valor > maior)
        maior = valor;
      else if (valor < menor)
        menor = valor;
    }
    printf("min: %lf, max: %f\n", menor, maior);
    return 0;
  }
  return 0;
}

