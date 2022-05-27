#include <stdio.h>



int main () {

  int num, max, contador;
  max = 0;

  for (contador = 0; contador < 3; contador++){
    scanf("%d", &num);
    if (num > max) {
      max = num;
    }
  }
  printf("%d", max);
  return 0;
}