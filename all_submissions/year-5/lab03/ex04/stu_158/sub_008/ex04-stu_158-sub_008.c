
#include <stdio.h>

int main() {
    int ch, num = 0, zero = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '0') {
            if (num) {
                printf("%c", ch);
                zero = 0;
            }
            else zero = 1;
        } else if (ch != ' ') {
            printf("%c", ch);
            num = 1;
            zero = 0;
        } else {
            if (zero) printf("0");
            printf(" ");
            zero = 0;
            num = 0;
        }
    }
    if (zero) {
        printf("0");
    }

    return 0;
}