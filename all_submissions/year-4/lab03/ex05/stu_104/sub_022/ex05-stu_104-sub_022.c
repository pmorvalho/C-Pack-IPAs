

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

int main() {

  int c;
  bool reading_sentence = false, ignore_next = false;

  while ((c = getchar()) != EOF) {

    
    if (c == '"' && !reading_sentence) {
      reading_sentence = true;
      continue;
    } else if (c == '"' && reading_sentence && !ignore_next) {
      reading_sentence = false;
      putchar('\n');
      continue;
    }

    
    if (c == '\\' && reading_sentence && !ignore_next) {
      ignore_next = true;
      continue;
    }

    
    if (ignore_next) {
      ignore_next = false;
    }

    if(reading_sentence){
      putchar(c);
    }
  }

  return 0;
}