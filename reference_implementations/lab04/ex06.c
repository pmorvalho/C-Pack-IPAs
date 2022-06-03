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

void maiusculas(char s[]) {

  int i = 0;
  while(s[i] != '\0') {
    if(s[i] >= 'a' && s[i] <= 'z')
      s[i] = s[i] - 'a' + 'A';
    i++;
  }
}

int main() {
  char s[MAX];

  leLinha(s);
  maiusculas(s);
  printf("%s\n", s);
  return 0;
}
