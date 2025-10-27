
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

void apagaCaracter(char s[], char c) {
  int i, j;

  i = 0;
  j = 0; 

  while (s[i]) {
    if (s[i] != c)
      s[j++] = s[i];
    i++;
  }

  s[j] = '\0';
}

int main() {
  char str[MAX];
  char c;

  leLinha(str);

  c = getchar();

  apagaCaracter(str, c);
  puts(str);
  return 0;
}
