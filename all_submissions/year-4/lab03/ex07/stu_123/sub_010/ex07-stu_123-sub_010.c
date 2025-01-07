#include <stdio.h> 

int atoi(int firstDigit) {
  int n = firstDigit - '0';
  int c;

  while ((c = getchar()) != EOF && c != ' ' && c != '\n') {
    n = 10 * n + c - '0';
  }

  return n;
}

int main() {
  int c;
  char lastOperator = '+';
  int total = 0, value;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      value = atoi(c);
      if (lastOperator == '+')
        total += value;
      else
        total -= value;
    } else if (c == '+' || c == '-')
     lastOperator = c;
  } 

  printf("%d\n", total);
  return 0;
}
