
#include <stdio.h>

int main() {
    int c;
    int zeroFlag = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            printf("\n");
            zeroFlag = 0;
        } else if (c >= '1' && c <= '9') {
            putchar(c);
            zeroFlag = 1;
        } else if (c == '0') {
            if (zeroFlag == 1) {
                putchar(c);
            } else {
                int next_c = getchar();
                if (next_c == ' ' || next_c == '\n' || next_c == EOF) {
                    printf("0\n");
                    zeroFlag = 0;
                } else if (next_c >= '1' && next_c <= '9') {
                    putchar(next_c);
                    zeroFlag = 1;
                } else if (next_c == '0') {
                    ungetc(next_c, stdin);
                }
            }
        }
    }
    return 0;
}



