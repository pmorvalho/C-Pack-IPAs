

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define VECMAX 80

int main() {
  char word[VECMAX];
  int word_length;
  bool is_palindrome = true;

  
  
  

  scanf("%s", word);

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