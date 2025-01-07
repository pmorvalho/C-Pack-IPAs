

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define VECMAX 80

int main() {
  char word[VECMAX];
  int word_length;
  bool is_palindrome = true;

  
  char format[13];
  snprintf(format, sizeof(format), "%%%d[a-zA-Z]s", VECMAX - 1);

  if (scanf(format, word) != 1) {
    return 2;
  }

  word_length = strlen(word);
  for (int i = 0; i < word_length / 2; i++) {
    if (word[i] != word[word_length - 1 - i]) {
      is_palindrome = false;
      break;
    }
  }

  if (is_palindrome) {
    puts("yes");
  } else {
    puts("no");
  }

  return 0;
}