#include <stdio.h>

#define MAX 80

int main()
{
  char s[MAX];
  int i, size, result = 1;

  scanf("%s", s);

  i = 0;
  while (i < MAX)
  {
    if (s[i] == '\0')
    {
      size = i;
      break;
    }
    ++i;
  }

  for (i = 0; i < size / 2; ++i)
    if (s[i] != s[size - i - 1])
    {
      result = 0;
      break;
    }

  printf(result == 1 ? "yes\n" : "no\n");

  return 0;
}