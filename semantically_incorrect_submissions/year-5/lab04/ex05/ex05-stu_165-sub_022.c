
#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]) {
  int charLido = 0;

  while((s[charLido] = getchar()) != EOF && s[charLido] != '\n') {charLido++;}
  
  s[charLido] = '\0';
  return charLido + 1;
}

int main() {
  char s[MAX];

  leLinha(s);

  printf("%s", s);

  return 0;
}