#include <stdio.h>



int main () {

  int num, max;
  max = 0;

  for (int contador = 0; contador < 3; contador++){
    scanf("%d", &num);
    if (num > max) {
      max = num;
    }
  }
  printf("%d", &max);
  return 0;
}