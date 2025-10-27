
#include <stdio.h>
#define VECMAX 100

int main() {
  int n, i, j, max = 0, nums[VECMAX];

  scanf("%d", &n);
  if(n > VECMAX)
    return -1;
  
  for(i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
    max = (nums[i] > max) ? nums[i] : max;
  }
  for(i = 0; i < max; i++) {
    for(j = 0; j < n; j++) {
      if (nums[j] > 0) {
        nums[j]--;
        putchar('*');
      } else {putchar(' ');}
    }
    putchar('\n');
  }
}