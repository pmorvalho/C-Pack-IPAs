

#include <stdio.h>

int main() {
    int c, sum = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        sum += (c - '0');
    }
    if (sum % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}