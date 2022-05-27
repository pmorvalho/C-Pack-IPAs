#include <stdio.h>

int main() {
  char c;
  int soma;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      c -= '0';
      soma += c;
    }
  }
  if (soma % 9 == 0) {
      printf("yes\n");
    }
    else {
      printf("no\n");
    }
  return 0;
}
