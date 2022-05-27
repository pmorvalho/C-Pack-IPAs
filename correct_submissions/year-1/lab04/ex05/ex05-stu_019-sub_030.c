#include <stdio.h>

#define MAX 80

int leLinha(char s[])
{
  int i;
  char c;

  for(i = 0; i < MAX-1 && (c = getchar()) != '\n' && c != EOF; i++)
    s[i] = c;

  s[i] = '\0';
  if(i != 0)
    return --i;
  else
    return i;
}

int main()
{
  char s[MAX];

  leLinha(s);

  printf("%s\n", s);
  return 0;
}
