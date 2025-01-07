
#include <stdio.h>

int main() {
  int n;
  float biggest, smallest, num;
  scanf("%d", &n);
  scanf("%f", &biggest);
  smallest = biggest;
  while (n > 1) {
    scanf("%f", &num);
    if (num > biggest) {
      biggest = num;
    }
    if (num < smallest) {
      smallest = num;
    }
    n -= 1;
  }
  printf("min: %f, max: %f\n", smallest, biggest);
}
