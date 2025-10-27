
#include <stdio.h>


int max(int a, int b) {
  return (a > b) ? a : b;
}


int min(int a, int b) {
  return (a < b) ? a : b;
}

int main() {
  int n1, n2, n3;

  scanf("%d %d %d", &n1, &n2, &n3);
  
  int minn = min(n1, min(n2, n3));
  int maxn = max(n1, max(n2, n3));
  
  printf("%d ", minn);
  
  if (n1 == maxn || n1 == minn) {
    if (n2 == maxn || n2 == minn) {
      printf("%d ", n3);
    } else
        printf("%d ", n2);
  } else
      printf("%d ", n1);
  
  printf("%d\n", maxn);
  return 0;
}