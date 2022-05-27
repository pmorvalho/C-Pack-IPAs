#include <stdio.h>

void swap(int *x, int *y) {
  int t;
  t = *x;
  *x = *y;
  *y = t;
}


int main() {
  float min, max, n;
  scanf("%f", &n);
  min = max = n;
  while (n >= 0) {
    if (n > max)
      max = n;
    if (n < min)
      min = n;
    scanf("%f", &n);
  }
  printf("min: %f, max: %f\n", min, max);
  return 0;
}