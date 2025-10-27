
#include <stdio.h>
#include <stdbool.h>

#define MAX 80

int tamanho(char str[]) {
  int tam = -1;

  while (str[++tam]) ;

  return tam;
}

bool ePalindromo(char str[]) {
  int l, r;

  l = 0, r = tamanho(str) - 1;

  while (l < r)
    if (str[l++] != str[r--])
      return false;

  return true;
}

int main() {
  char str[MAX];

  scanf("%s", str);

  puts(ePalindromo(str) ? "yes" : "no");
  return 0;
}

