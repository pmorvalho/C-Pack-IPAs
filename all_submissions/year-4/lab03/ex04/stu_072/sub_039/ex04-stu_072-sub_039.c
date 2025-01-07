

#include <stdio.h>

int main() {

    int c, isNum = 0;

    while ((c = getchar()) && c != '\n') {
        if (c == '0' && isNum == 0) {
            continue;
        }
        else if (c == ' ' && isNum == 0) {
            printf("0 ");
        }
        else if (c == ' ' && isNum == 1) {
            putchar(c);
            isNum = 0; 
        }
        else{
            isNum = 1;
            putchar(c);
        }
    }
    printf("\n");

    return 0;
}