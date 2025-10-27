
#include <stdio.h>

int main() {
  int valor1, valor2;
  char *res;

  scanf("%d %d", &valor1, &valor2);

  
  if (valor1 % valor2 == 0)
    res = "yes";
  else
    res = "no";

  printf("%s\n", res);
  return 0;
}

