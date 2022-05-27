#include <stdio.h>

#define DIM 200

int leLinha(char s[]);
void maiusculas(char s[]);

int main()
{
  char s[DIM];
  int i;
  int tam;

  tam = leLinha(s);
  maiusculas(s);
  
  for (i = 0; i < tam; i++) {
    putchar(s[i]);
  }
  putchar('\n');
  
  return 0;
}

int leLinha(char s[])
{
  int c;
  int contador;

  contador = 0;
  
  while ((c = getchar()) != EOF && c != '\n') {
    s[contador] = c;
    contador++;
  }

  s[contador] = '\0';

  return contador;
}

void maiusculas(char s[])
{
  int c;
  int diff;

  diff = 'A' - 'a';
  c = 0;
  while (s[c] != '\0') {
    if (s[c] >= 'a' && s[c] <= 'z') {
      s[c] +=  diff;
    }
    c++;
  }
}
