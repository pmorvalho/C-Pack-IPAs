#include <stdio.h>

int main() {
  int n, i;
  float media = 0, valor;
  
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    scanf("%f", &valor);
    media += valor;
  }
  media /= n;

  printf("%.2f\n", media);
  return 0;
}
