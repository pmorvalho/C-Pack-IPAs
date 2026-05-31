
#include <stdio.h>






















int main() {
    int c;
    int in_number = 0;
    int printed = 0;

    while ((c = getchar()) != EOF) {

        if (c >= '0' && c <= '9') {

            if (!in_number) {
                in_number = 1;
                printed = 0;
            }

            if (c != '0') {
                putchar(c);
                printed = 1;
            }
            else if (printed) {
                putchar('0');
            }
        }
        else {
            if (in_number && !printed)
                putchar('0');

            in_number = 0;
            putchar(c);
        }
    }

    if (in_number && !printed)
        putchar('0');

    return 0;
}
