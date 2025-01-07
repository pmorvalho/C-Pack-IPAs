
#include <stdio.h>

int main() {
  int x, y, z, maior;
  scanf("%d %d %d", &x, &y, &z);
  if (x > y && x > z) {
    maior = x;
  } else {
    if (y > x && y > z) {
      maior = y;
    } else {
      if (z > x && z > y) {
        maior = z;
      }
    }
  }
  printf("%d", maior);
  return 0;
}
