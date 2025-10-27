
#include <stdio.h>

#define MAX 1024

int leLinha(char s[]) {
  int tam = 0;
  int c;

  while ((c = getchar()) != EOF && c != '\n')
    s[tam++] = c;

  s[tam] = '\0';

  return tam;
}

int main() {
  char str[MAX];

  leLinha(str);

  puts(str);
  return 0;
}
