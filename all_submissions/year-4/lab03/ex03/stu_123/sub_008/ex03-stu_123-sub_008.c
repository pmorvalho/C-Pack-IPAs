#include <stdio.h>

void cruz(int n) {
  int l, c;
  int a_d = 0, a_e = n - 1;

  for (l = 0; l < n; l++) {
    for (c = 0; c < n; c++) {
      putchar(c == a_d || c == a_e ? '*' : '-');
      if (c != n - 1)
        putchar(' ');
    }
    putchar('\n');
    a_d++;
    a_e--;
  }
}


int main() {
  int n;

  scanf("%d", &n);

  cruz(n);

  return 0;
}
