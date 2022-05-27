#include <stdio.h>

#define MAX 100

int leLinha(char s[]);
void maiusculas(char s[]);

int main()
{
  char s[MAX];
  int i, size;
  
  size = leLinha(s);
  maiusculas(s);
  for (i = 0; i < size; i++)
    putchar(s[i]);
  putchar('\n');

  return 0;
}



int leLinha(char s[])
{
  int i;
  char c;
  
  for (i = 0; (c = getchar()) != EOF && c != '\n' && i < MAX - 1; i++)
    s[i] = c;
  s[i] = '\0';
  
  return i;
}

void maiusculas(char s[])
{
  int i;
  
  for (i = 0; s[i] != '\0'; i++)
    if (s[i] >= 'a' && s[i] <= 'z')
      s[i] -= ('a' - 'A');
}
