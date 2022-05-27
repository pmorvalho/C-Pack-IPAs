#include <stdio.h>

#define MAX 100

int leLinha(char s[]);
void apagaCaracter(char s[], char c);

int main()
{
  char s[MAX], c;
  
  leLinha(s);
  
  scanf("%c", &c);
  apagaCaracter(s, c);
  
  printf("%s\n", s);

  return 0;
}

int leLinha(char s[])
{
  int i;
  char c;
  
  for (i = 0; (c = getchar()) != EOF && c != '\n' && i < MAX - 1; i++)
    s[i] = c;
  s[i] = '\0';
  
  return i;
}

void apagaCaracter(char s[], char c)
{
  int read_i = 0, write_i = 0;
  char chr;
  
  while ((chr = s[read_i++]) != '\0')
    if (chr != c)
      s[write_i++] = chr;
  s[write_i] = '\0';
}
    
