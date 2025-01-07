
#include <stdio.h>
int main() {
  int x, y, z, highest, second, third;
  scanf("%d %d %d", &x, &y, &z);
  if (x > y && x > z) {
    highest = x;
    if (y > z) {
      second = y;
      third = z;
    } else {
      second = z;
      third = y;
    }
  } else {
    if (y > x && y > z) {
      highest = y;
      if (x > z) {
        second = x;
        third = z;
      } else {
        second = z;
        third = x;
      }
    } else {
      if (z > x && z > y) {
        highest = z;
        if (x > y) {
          second = x;
          third = y;
        } else {
          second = y;
          third = x;
        }
      }
    }
  }
  printf("%d %d %d\n", third, second, highest);
}
