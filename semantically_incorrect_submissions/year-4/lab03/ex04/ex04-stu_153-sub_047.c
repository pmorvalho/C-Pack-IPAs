
#include <stdio.h>



void readNumbers() {
    
  
    int n, counter;
    counter = 0;
    while (scanf("%d", &n) == 1) {
        if (counter != 0)
            printf(" \n");
        counter++;
        printf("%d", n);
    }
    printf("\n");
}

void printNumbers() {
    
    
    int counter;
    char c;
    counter = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            if (counter != 0)
                printf(" \n");
            counter++;
        } else {
            printf("%c", c);
        }
    }
}

int main() {

    printNumbers();
    return 0;
}