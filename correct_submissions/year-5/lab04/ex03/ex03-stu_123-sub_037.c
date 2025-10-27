
#include <stdio.h>

#define VECMAX 100

int max(int vec[], int n) {
  int i;
  int m = vec[0];
  
  for (i = 1; i < n; i++)
    if (vec[i] > m)
      m = vec[i];

  return m;
}

int main() {
  int vec[VECMAX];
  int n, i, j;
  int maxVal;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &vec[i]);

  maxVal = max(vec, n);

  for (i = maxVal; i > 0; i--) {
    for (j = 0; j < n; j++)
      putchar(vec[j] >= i ? '*' : ' ');
    putchar('\n');
  }

  return 0;
}
