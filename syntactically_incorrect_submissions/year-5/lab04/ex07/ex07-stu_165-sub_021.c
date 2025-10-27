
#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]) {
  int charLido = 0;

  while((s[charLido] = getchar()) != EOF && s[charLido] != '\n') {charLido++;}
  
  return charLido + 1;
}

void apagaCaracter(char s[], char c) {
  int i;

  for(i = 0; i < strlen(s); i++) 
    if (s[i] != c) 
      printf("%c", s[i]);
}

int main() {
  char c, s[MAX];

  leLinha(s);
  scanf("%c", &c);
  apagaCaracter(s, c);

  return 0;
}