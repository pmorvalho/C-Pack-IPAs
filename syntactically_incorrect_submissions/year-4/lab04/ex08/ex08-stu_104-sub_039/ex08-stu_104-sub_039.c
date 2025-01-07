

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define VECMAX 100

int readNumber(char number[VECMAX]);

int main() {
  char number1[VECMAX], number2[VECMAX];

  readNumber(number1);
  readNumber(number2);

  int i = 0;
  while (number1[i]) {
    if (number1[i] > number2[i]) {
      puts(number1);
      break;
    } else if (number1[i] < number2[i]) {
      puts(number2);
      break;
    }
    i++;
  }

  return 0;
}

int readNumber(char number[VECMAX]) {

  bool reading_num;
  int n_read = 0;
  while (n_read < VECMAX - 1) {
    int c;
    if (isdigit(c = getchar()) && !reading_num) {
      reading_num = true;
    }

    if (!isdigit(c) && reading_num) {
      break;
    }

    if (reading_num) {
      number[n_read] = c;
      n_read++;
    }
  }

  number[n_read] = '\0';

  return n_read;
}