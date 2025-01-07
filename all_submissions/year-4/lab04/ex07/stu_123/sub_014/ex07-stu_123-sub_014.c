#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 1024


int leLinha(char str[], int maxSize) {
  int i = 0, c;

  while ((c = getchar()) != EOF && c != '\n' && i < maxSize)
    str[i++] = c;
  
  str[i] = '\0';
  return i;
}

void apagaCaracter(char str[], char c) {
  int i, j;

  for (i = 0, j = 0; str[i] != '\0'; i++)
    if (str[i] != c)
      str[j++] = str[i];

  str[j] = '\0';
}

int main() {
  char str[MAX_SIZE];
  int c;

  leLinha(str, MAX_SIZE - 1);
  c = getchar();

  apagaCaracter(str, c);
  
  puts(str);
  return 0;
}
