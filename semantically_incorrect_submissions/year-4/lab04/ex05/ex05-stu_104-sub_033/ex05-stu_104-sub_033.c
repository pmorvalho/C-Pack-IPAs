

#include <ctype.h>
#include <stdio.h>
#define VECMAX 80

int readLine(char string[VECMAX]);
int main() {
  char string[VECMAX];

  readLine(string);

  printf("%s", string);

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