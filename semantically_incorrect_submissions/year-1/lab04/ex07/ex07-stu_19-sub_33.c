#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c)
{
  int i, j;

  for(i = 0; s[i] != '\0'; i++)
    if(s[i] == c)
    {
      for(j = i; s[j] != '\0'; j++)
	s[j] = s[j+1];
      s[j] = '0';
    }

  printf("%s\n", s);
}

int main()
{
  int i;
  char s[MAX], c, rem_char;

  for(i = 0; i < MAX-1 && (c = getchar()) != '\n'; i++)
    s[i] = c;
  s[i] = '\0';

  rem_char = getchar();
  apagaCaracter(s, rem_char);
  return 0;
}
