
#include <stdio.h>



void readNumbers() {
  
    int n, counter;
    counter = 0;
    while (scanf("%d", &n) == 1) {
        if (counter != 0)
            printf(" ");
        counter++;
        printf("%d", n);
    }
    printf("\n");
}

int main() {

    readNumbers();
    return 0;
}