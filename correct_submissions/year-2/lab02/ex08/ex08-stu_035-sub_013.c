#include <stdio.h>



int main() {
  int count = 0, i;
  float n, soma=0.0, media;

  scanf("%d", &i);

  while (count++ < i) {
    scanf("%f", &n);
    soma += n;
  }
  media = soma/i;

  printf("%.2f\n", media);

  return 0;
}
