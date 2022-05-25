
#include <stdio.h>
#define VECMAX 100

int max(int n, int v[VECMAX]) {
    int i, rv = 0;
    for (i = 0; i < n; ++i)
        if (rv < v[i]) rv = v[i];
    return rv;
}

int main() {
  int n,i,val,v[VECMAX];
  scanf("%d", &n);
  for (i = 0; i < n; ++i) scanf("%d", &v[i]);
  for (val = max(n,v); val >= 1; val--) {
      for (i = 0; i < n; ++i)
          putchar(v[i] >= val ? '*' : ' ');
      putchar('\n');
  }
  return 0;
}
