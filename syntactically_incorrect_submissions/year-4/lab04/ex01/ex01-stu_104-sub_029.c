

#include <stdio.h>
#define VECMAX 100

int main() {
  int numbers[VECMAX], nums;
  if (scanf("%d", &nums) != 1 && (nums < 0 || nums >= VECMAX)) {
    return 2;
  }

  int i = 0;
  while (i < nums) {
    if (scanf("%d", &numbers[i]) != 1 && numbers[i] < 0) {
      return 2;
    }
    i++;
  }
  numbers[i] = 0;

  i = 0;
  while (numbers[i]) {
    for (int j = 0; j < numbers[i]; j++) {
      putchar('*');
    }
    putchar('\n');
    i++;
  }

  return 0;
}