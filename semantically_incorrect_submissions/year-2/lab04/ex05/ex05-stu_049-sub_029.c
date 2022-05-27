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
  int characters;
  char word[MAX];

  characters = leLinha(word);

  printf("%s\n", word);
  printf("%d\n", characters);

  return 0;
}