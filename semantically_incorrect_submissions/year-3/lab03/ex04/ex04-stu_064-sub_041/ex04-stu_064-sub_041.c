

#include <stdio.h>

int main() {
    int c;
    long num = 0;

    while ((c = getchar()) != EOF) {
        if (c == '0' && num == 0) {
        }
        else if (c >= '0' && c <= '9')
            num = num * 10 + (c - '0');
        else {
            printf("%ld%c", num, c);
            num = 0;
        }
    }

    return 0;
}