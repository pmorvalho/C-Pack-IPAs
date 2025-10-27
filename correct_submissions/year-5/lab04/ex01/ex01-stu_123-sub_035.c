
#include <stdio.h>

#define VECMAX 100

void writeStar(int n) {
  int i;
  
  for (i = 0; i < n; i++)
    putchar('*');

  putchar('\n');
}

int main() {
  int vec[VECMAX];
  int n, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &vec[i]);

  for (i = 0; i < n; i++)
    writeStar(vec[i]);

  return 0;
}
