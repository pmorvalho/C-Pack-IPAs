#include <stdio.h>



int main () {

  int num, max, contador;
  max = -2147483648; 

  for (contador = 0; contador < 3; contador++){
    scanf("%d", &num);
    if (num > max) {
      max = num;
    }
  }
  printf("%d\n", max);
  return 0;
}