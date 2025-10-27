
#include <stdio.h>

int main() {
  int c;
  char operator = '+';
  int total = 0, value;

  while ((c = getchar()) != EOF && c != ' ' && c != '\n') {
    total = 10 * total + c - '0';
  }

  while (c != EOF && c != '\n') {
    operator = getchar();
    getchar(); 

    value = 0;
    while ((c = getchar()) != EOF && c != ' ' && c != '\n')
      value = 10 * value + c - '0';

    if (operator == '+')
      total += value;
    else
      total -= value;
  } 
 

  printf("%d\n", total);
  return 0;
}

