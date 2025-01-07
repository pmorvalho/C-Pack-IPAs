

#include <ctype.h>
#include <stdio.h>
#define VECMAX 80

int readLine(char string[VECMAX]);
void delChars(char *target, char string[VECMAX]);

int main() {
  char string[VECMAX], target;

  readLine(string);

  if (scanf("%c", &target) != 1) {
    return 2;
  }

  delChars(&target, string);

  puts(string);

  return 0;
}

int readLine(char string[VECMAX]) {

  int n_read = 0;
  while (n_read < VECMAX - 1) {
    int c;
    if ((c = getchar()) == EOF || c == '\n') {
      break;
    }

    string[n_read] = c;
    n_read++;
  }

  string[n_read] = '\0';

  return n_read;
}

void delChars(char *target, char string[VECMAX]) {

  int read = 0, write = 0;
  while (string[read]) {

    if (string[read] != *target) {
      string[write] = string[read];
      write++;
    }

    read++;
  }

  string[write] = '\0';
}