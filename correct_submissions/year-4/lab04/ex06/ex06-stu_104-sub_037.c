

#include <ctype.h>
#include <stdio.h>
#define VECMAX 80

int readLine(char string[VECMAX]);

void to_upper(char string[VECMAX]);

int main() {
  char string[VECMAX];

  readLine(string);
  to_upper(string);

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

void to_upper(char string[VECMAX]) {

  int i = 0;
  while (string[i]) {
    if (string[i] >= 'a' && string[i] <= 'z') {
      string[i] -= ('a' - 'A');
    }
    i++;
  }
}