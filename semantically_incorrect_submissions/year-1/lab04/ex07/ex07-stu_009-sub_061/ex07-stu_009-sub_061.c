#include <stdio.h>

#define DIM 200

int leLinha(char s[]);
void apagaCaracter(char s[], char c);

int main()
{
  char s[DIM];
  int i;
  int tam;
  char c;

  tam = leLinha(s);
  c = getchar();
  
  apagaCaracter(s, c);
  
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

void apagaCaracter(char s[], char c)
{
  int i_read;
  int i_write;

  i_write = 0;
  for (i_read = 0; s[i_read] != '\0'; i_read++) {
    if (s[i_read] != c) {
      s[i_write] = s[i_read];
      i_write++;
    }
  }
}
