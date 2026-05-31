

#include <stdio.h>

int main() {
    int c;
    int in_num = 0;
    int only_zeros = 1;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            if (in_num == 0) {
                in_num = 1;
                only_zeros = 1;
            }
            if (c != '0') {
                putchar(c);
                only_zeros = 0;
            }
            else {
                if (only_zeros == 0) {
                    putchar(c);
                }
            }
        } 
        else {

            if (in_num == 1) {
                if (only_zeros == 1) {
                    putchar('0');
                }
                in_num = 0;
            }
            putchar(c);
        }
    }
    if (in_num == 1 && only_zeros == 1) {
        putchar('0');
    }
    return 0;
}