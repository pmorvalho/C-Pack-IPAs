
#include <stdio.h>

int main() {
  int valor1, valor2, valor3;

  scanf("%d %d %d", &valor1, &valor2, &valor3);



  if (valor1 >= valor2 && valor2 >= valor3)
    printf("%d %d %d\n", valor3, valor2, valor1);
  else if (valor1 >= valor2 && valor1 >= valor3)
    printf("%d %d %d\n", valor2, valor3, valor1);
  else if (valor2 >= valor1 && valor1 >= valor3)
    printf("%d %d %d\n", valor3, valor1, valor2);
  else if (valor2 >= valor1 && valor2 >= valor3)
    printf("%d %d %d\n", valor1, valor3, valor2);
  else if (valor3 >= valor1 && valor1 >= valor2)
    printf("%d %d %d\n", valor2, valor1, valor3);
  else 
    printf("%d %d %d\n", valor1, valor2, valor3);

  return 0;
}

