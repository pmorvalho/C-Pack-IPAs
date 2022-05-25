#include<stdio.h>
#define MAX 80

int leLinha(char s[]) {
  int c, i = 0;

  while((c = getchar()) != '\n' && c != EOF) {
    s[i++]=c;
  }
  s[i] = '\0';
  return i;
}

void apagaCaracter(char s[], char c) {
  int i = 0, current = 0;
  while(s[i] != '\0') {
    if(s[i] != c)
      s[current++] = s[i];
    i++;
  }
  s[current] = '\0';
}

int main() {
  char s[MAX];
  char c;

  leLinha(s);
  c = getchar();
  apagaCaracter(s,c);
  printf("%s\n", s);
  return 0;
}
