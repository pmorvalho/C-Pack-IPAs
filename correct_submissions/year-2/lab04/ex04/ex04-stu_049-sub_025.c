#include <stdio.h>

#define MAX 80

int main()
{
  char word[MAX];
  int i, true = 0, j, c;

  for (i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != ' ' && c != '\n'; i++)
  {
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
      word[i] = c;
  }

  word[i] = '\0';

  for (j = 0; j < i; j++)
  {
    if (word[j] != word[i - j - 1])
      true = 1;
  }

  if (true)
    printf("no\n");
  else
    printf("yes\n");

  return 0;
}