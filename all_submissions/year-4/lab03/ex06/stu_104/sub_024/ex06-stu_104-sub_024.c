

#define MAX_BUFF 100
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void charToIntDig(char *c) { *c = *c - '0'; }
char getChunk(char *buff, int max_chunk_size);
int clearStdin();

int main() {
  char chunk[MAX_BUFF] = {0};
  int rest;

  
  if ((rest = clearStdin()) == -1) {
    return 2;
  }

  
  while (true) {
    char stopflag = getChunk(chunk, MAX_BUFF);
    int i = 0;
    while (chunk[i]) {
      rest += chunk[i];
      i++;
    }

    rest = rest % 9;
    if (!stopflag) {
      break;
    }
  }

  
  if (rest == 0) {
    puts("yes");
  } else {
    puts("no");
  }

  return 0;
}

char getChunk(char *buff, int max_chunk_size) {
  int i;
  for (i = 0; i < max_chunk_size - 1; i++) {
    char temp;
    if (!isdigit(temp = getchar())) {
      buff[i] = 0;
      return 0;
    } else {
      charToIntDig(&temp);
      buff[i] = temp;
    }
  }

  buff[i] = 0;
  return 1;
}

int clearStdin() {
  char temp;
  if (scanf("%c", &temp) != 1) {
    return -1;
  }

  charToIntDig(&temp);
  return temp;
}