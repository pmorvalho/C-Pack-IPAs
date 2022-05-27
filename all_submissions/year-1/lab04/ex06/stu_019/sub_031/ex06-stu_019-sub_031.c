#include <stdio.h>

#define MAX 80

void maiusculas(char s[])
{
  int i;

  for(i = 0; s[i] != '\0'; i++)
    if(s[i] >= 'a' && s[i] <= 'z')
      s[i] = 'A' + (s[i] - 'a');
  printf("%s\n", s);
}

int main()
{
  int i, c;
  char s[MAX];

  for(i = 0; i < MAX-1 && (c = getchar()) != '\n' && c != EOF; i++)
    s[i] = c;
  s[i] = '\0';
  
  maiusculas(s);
  return 0;
}
