
#include <stdio.h>
#include <float.h>

int main() {
  int i;
  float N, temp, min = FLT_MAX, max = -FLT_MAX;

  scanf("%d", &N);

  for(i = 0; i < N; i++) {
    scanf("%f", &temp);
    if (temp < min)
      min = temp;
    if (temp > max)
      max = temp;
  }
  printf("min: %f, max: %f\n", min, max);
  
  return 0;
}