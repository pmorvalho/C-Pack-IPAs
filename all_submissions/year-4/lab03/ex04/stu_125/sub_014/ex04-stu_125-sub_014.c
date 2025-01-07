
#include <stdio.h>

#define OUT_NUM 0
#define IN_NUM 1
#define IN_ZERO 1
#define OUT_ZERO 0

int main() {
    char ch; 
    int num_state = OUT_NUM, zero_state = OUT_ZERO;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\n') {
            if (num_state == OUT_NUM && zero_state == IN_ZERO)
                printf("0");
            
            putchar(ch);
            num_state = OUT_NUM;
            zero_state = OUT_ZERO;
        }
        else if (num_state == IN_NUM) {
            putchar(ch);
        }
        else if (ch == '0')
            zero_state = IN_ZERO;
        else if (ch != '0') {
            putchar(ch);
            num_state = IN_NUM;
            zero_state = IN_ZERO;
        }
    }

    printf("\n");

    return 0;
}