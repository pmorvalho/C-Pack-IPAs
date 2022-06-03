#include <stdio.h>
#include <values.h>

float menor(float a, float b) {
  return (a < b) ? a : b;
  
}

float maior(float a, float b) {
  return (a > b) ? a : b;
}

int main() {
  int n;
  float min = FLT_MAX, max = -FLT_MAX, x;
  
  
  
  scanf("%d", &n);

  while (n--) {
    scanf("%f", &x);
    min = menor(min, x);
    max = maior(max, x);
  }

  printf("min: %f, max: %f\n", min, max);

  return 0;
}
