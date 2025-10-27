#include <stdio.h>

void remove_zeros();

int main() {
    remove_zeros();
    return 0;
}

void remove_zeros() {
    int c;
    int num1 = 0;
    int sernum = 0;  

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') { 
            if (c != '0' || num1) {
                putchar(c);
                num1 = 1;
            }
            sernum = 1;
        } else {
            if (sernum) {
                if (!num1) { 
                    putchar('0');
                }
                sernum = 0;
                num1 = 0;
            }
            putchar(c);
        }
    }
}
