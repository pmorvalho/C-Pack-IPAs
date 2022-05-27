#include <stdio.h>  
#include <string.h>

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

void apagaCaracter(char s[], char c)
{
  int current = 0, i = 0;

  while (s[i] != '\0')
  {
    if (s[i] != c)
      s[current++] = s[i];
    i++;
  }

  s[current] = '\0';
}

int main()
{
  char word[MAX], c;

  leLinha(word);
  c = getchar();
  apagaCaracter(word, c);
  printf("%s\n", word);

  return 0;
}