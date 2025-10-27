
#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]) {
  int charLido = 0;

  while((s[charLido] = getchar()) != EOF && s[charLido] != '\n' && s[charLido] != ' ') {charLido++;}
  
  s[charLido] = '\0';
  return charLido + 1;
}

void maiusculas(char s[]) {
  int i, len = strlen(s);

  for(i = 0; i < len; i++) 
    if (s[i] >= 'a' && s[i] <= 'z') 
      s[i] = s[i] - 32;
}

int main() {
  char s[MAX];

  leLinha(s);
  maiusculas(s);

  printf("%s", s);

  return 0;
}