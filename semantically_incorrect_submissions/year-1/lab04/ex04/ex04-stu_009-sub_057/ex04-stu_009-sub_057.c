#include <stdio.h>
#include <string.h>

#define DIM 257

int eh_palindromo(char s[]);

int main()
{
  char s[DIM];
  
  scanf("%s", s);
  
  if (eh_palindromo(s)) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }

  return 0;
}

int eh_palindromo(char s[])
{
  int i;
  int tam;

  tam = strlen(s);
  
  for (i = 0; i < tam/2; i++) {
    if (s[i] != s[tam-i-1]) {

      return 0;
    }
  }
  
  return 1;
}
    
