
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

void maiusculas(char s[]) {
  int i = -1;

  while (s[++i])
    if (s[i] >= 'a' && s[i] <= 'z')
      s[i] += 'A' -'a';
}

int main() {
  char str[MAX];

  leLinha(str);

  maiusculas(str);
  puts(str);
  return 0;
}
