#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 1024

int tamanho(char str[]) {
  int tam = -1;

  while (str[++tam]) ;

  return tam;
}

bool ePalindromo(char str[]) {
  int i = 0, j = tamanho(str) - 1;

  while (i < j)
   if (str[i++] != str[j--])
     return false;

  return true;
}

int main() {
  char str[MAX_SIZE];

  scanf("%s", str);

  puts(ePalindromo(str) ? "yes" : "no");
  return 0;
}
