#include <stdio.h>



int main() {
  int count = 0, i;
  float n, max, min;

  scanf("%d", &i);
  min = 0; max = 0;
  while (count++ < i) {
    scanf("%f", &n);

    if (count == 1) {
      max = n;
      min = n;
    }
    else if (n > max)
      max = n;
    else if (n < min)
      min = n;
  }

  printf("min: %f, max: %f\n", min, max);

  return 0;
}
