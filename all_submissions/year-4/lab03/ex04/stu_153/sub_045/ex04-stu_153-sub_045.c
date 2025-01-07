
#include <stdio.h>



void readNumbers() {
  
    int n;
    while (scanf("%d", &n) == 1) {
        printf("%d ", n);
    }
    printf("\n");
}

int main() {

    readNumbers();
    return 0;
}