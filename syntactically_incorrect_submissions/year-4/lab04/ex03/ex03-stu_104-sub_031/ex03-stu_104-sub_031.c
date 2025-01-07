

#include <stdio.h>
#define VECMAX 100

int main() {
  int numbers[VECMAX], nums, max = 0;
  if (scanf("%d", &nums) != 1 && (nums < 0 || nums >= VECMAX)) {
    return 2;
  }

  int i = 0;
  while (i < nums) {
    if (scanf("%d", &numbers[i]) != 1 && numbers[i] < 0) {
      return 2;
    }
    if (max < numbers[i]) {
      max = numbers[i];
    }
    i++;
  }
  numbers[i] = 0;

  i = 0;
  while (max) {
    for (int j = 0; j < nums; j++) {
      if(numbers[j] == max) {
        putchar('*');
        numbers[j]--;
      } else if (numbers[j] >= 0 && numbers[j] < max ){
        putchar(' ');
      }
    }
    putchar('\n');
    i++;
    max--;
  }

  return 0;
}