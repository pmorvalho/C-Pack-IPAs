#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main()
{
  int i, size;
  char s[MAX];

  size = leLinha(s);

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