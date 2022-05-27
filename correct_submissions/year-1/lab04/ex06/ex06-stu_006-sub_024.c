#include <stdio.h>

#define MAX 80

int leLinha(char s[]);
void maiusculas(char s[]);

int main()
{
  int i, size;
  char s[MAX];

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
        
    return i;
}

void maiusculas(char s[])
{
    int i = 0;
    char c;
    while ((c = s[i++]) != '\0')
    {
        if ('a' <= c && c <= 'z')
            s[i - 1] = c - 'a' + 'A';
    }
        
}