
#include <stdio.h>
#define VECMAX 100

int main() {
  int n, i, j, nums[VECMAX];

  scanf("%d", &n);
  if(n > VECMAX)
    return -1;
  for(i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
    for(j = 0; j < nums[i]; j++) {
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}