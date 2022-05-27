#include <stdio.h>

#define MAX 80

int leLinha(char s[])
{
  int c, i;

  for (i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
  }

  s[i] = '\0';

  return i;
}

void maiusculas(char s[])
{
  int i, comprimento;

  comprimento = leLinha(s);

  for (i = 0; i < comprimento; i ++)
  {
    if (s[i] >= 97 && s[i] <= 122)
      s[i] = s[i] - 32;
  }
}

int main()
{
  char word[MAX];

  maiusculas(word);

  printf("%s\n", word);

  return 0;
}