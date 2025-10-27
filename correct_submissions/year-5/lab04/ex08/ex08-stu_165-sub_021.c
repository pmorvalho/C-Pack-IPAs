
#include <stdio.h>
#include <string.h>

#define MAX 100

int leLinha(char s[]) {
  int charLido = 0;

  while((s[charLido] = getchar()) != EOF && s[charLido] != '\n' && s[charLido] != ' ') {charLido++;}
  
  s[charLido] = '\0';
  return charLido + 1;
}

int main() {
  char num1[MAX], num2[MAX];
  int i, len;
  leLinha(num1);
  leLinha(num2);

  for(i = 0; i < (len = strlen(num1)); i++) {
    if(num1[i] != num2[i]) {
      if (num1[i] > num2[i])
        printf("%s\n", num1);
      else 
        printf("%s\n", num2);
      return 0;
    }
  }

  return 0;
}