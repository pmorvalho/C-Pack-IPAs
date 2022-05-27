#include <stdio.h>

#define MAX 80

int leLinha(char s[])
{
  int i, c;

  for (i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
  }

  s[i] = '\0';

  return i;
}

int main()
{
  char word[MAX];

  leLinha(word);

  printf("%s\n", word);

  return 0;
}