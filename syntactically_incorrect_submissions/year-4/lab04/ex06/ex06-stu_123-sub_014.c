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

char* maiusculas(char str[]) {
  for (int i = 0; str[i] != '\0'; i++)
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 'a' -'A';

  return str;
}

int main() {
  char str[MAX_SIZE];

  leLinha(str, MAX_SIZE - 1);
  
  puts(maiusculas(str));
  return 0;
}
