#include <stdio.h>

void escreve_espaco(int n) {
  while (n-- > 0)
    putchar(' ');
}

void piramide(int n) {
  int i, j;

  for (i = 1; i <= n; i++) {
    escreve_espaco((n - i) * 2);
    putchar('1');
    for (j = 2; j <= i; j++)
      printf(" %d", j);
    
    for (j -= 2; j >= 1; j--)
      printf(" %d", j);
   
    putchar('\n');
  }
}


int main() {
  int n;

  scanf("%d", &n);

  piramide(n);

  return 0;
}
