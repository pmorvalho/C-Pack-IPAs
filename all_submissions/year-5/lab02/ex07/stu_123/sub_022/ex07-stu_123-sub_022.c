
#include <stdio.h>
#include <math.h>

int main() {
  int n, i, divisores, limite;
  scanf("%d", &n);

  

  if (n == 1)
    divisores = 1;
  else if (n > 1) {
    divisores = 2;
    limite = n / 2;

    for (i = 2; i <= limite; i++)
      if (n % i == 0)
        divisores++;
  } else
    return -1;

  printf("%d\n", divisores);

  return 0;
}

