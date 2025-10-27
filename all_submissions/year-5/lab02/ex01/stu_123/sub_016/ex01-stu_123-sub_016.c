
#include <stdio.h>

int maior(int x, int y) {
  if (x > y)
    return x;
  else
    return y;
}

int main() {
  int valor1, valor2, valor3;
  int m;

  scanf("%d %d %d", &valor1, &valor2, &valor3);

  
  m = maior(valor1, maior(valor2, valor3));
  printf("%d\n", m);
  return 0;
}

