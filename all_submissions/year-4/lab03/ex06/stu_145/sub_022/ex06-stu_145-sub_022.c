

#include <stdio.h>

#define ASCII_ZERO 48

int main() {
    int n, sum = 0;
    char c;
    while ((c = getchar()) != EOF) {
        n = c - ASCII_ZERO;
        sum = sum + n;
    }
    if (sum % 9 == 0) {
        printf("yes\n");
    } else{
        printf("no\n");
    }
    return 0;
}