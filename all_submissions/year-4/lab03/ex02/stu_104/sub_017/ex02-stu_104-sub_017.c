

#include <stdio.h>

void piramid(int layers);

int main() {

  
  int number;
  if (scanf("%d", &number) != 1 && number < 2) {
    return 2;
  }

  piramid(number);

  return 0;
}


void piramid(int layers) {
  for (int i = 1; i <= layers; i++) {

    
    for (int j = 0; j < (layers - i) * 2 - 1; j++) {
      printf("%s", " ");
    }

    
    for (int j = 1; j <= i; j++) {
      if (!(layers == i && j == 1)) {
        printf("%s", " ");
      }
      printf("%d", j);
    }

    
    for (int j = i-1; j >= 1; j--) {
      printf("%s", " ");
      printf("%d", j);
    }

    
    puts("");
  }
}