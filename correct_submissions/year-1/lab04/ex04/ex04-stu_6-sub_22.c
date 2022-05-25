#include <stdio.h>
#include <string.h>

#define MAX 80

int main()
{
  int i, size, result = 1;
  char s[MAX];

  scanf("%s", s);
  size = strlen(s);

  for (i = 0; i < (size / 2); i++)
  {
      if (s[i] != s[size - i - 1])
      {
          result = 0;
          break;
      }
  }

  printf(result == 1 ? "yes\n" : "no\n");

  return 0;
}