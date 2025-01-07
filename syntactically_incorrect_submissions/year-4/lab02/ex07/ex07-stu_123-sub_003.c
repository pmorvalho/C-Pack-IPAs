#include <stdio.h>
#include <math.h>

int main() {
  int n, i, divisores, limite;
  scanf("%d", &n);

  divisores = n > 0 ? 2 : 1;
  limite = sqrt(n);

  for (i = 2; i <= limite; ++i)
       if ((n % i) == 0) 
         divisores += (n / i) != i ? 2 : 1;

  printf("%d\n", divisores);

  return 0;
}
