#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 1024


int leLinha(char str[], int maxSize) {
  int i = 0, c;

  while ((c = getchar()) != EOF && i < maxSize)
    str[i++] = c;
  
  str[i] = '\0';
  return i;
}

int main() {
  char str[MAX_SIZE];

  leLinha(str, MAX_SIZE - 1);
  puts(str);
  return 0;
}
