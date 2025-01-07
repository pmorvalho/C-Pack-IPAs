
#include <stdio.h>

#define OUT_NUM 1
#define IN_NUM 0

int main() {
    char ch; 
    int num_state = OUT_NUM, space = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\n') {
            space += 1;

            if (space > 1)
                printf("0");
            
            putchar(ch);
            num_state = OUT_NUM;
        }
        else if (num_state == IN_NUM) {
            putchar(ch);
            space = 0;
        }
        else if (ch != '0') {
            putchar(ch);
            space = 0;
            num_state = IN_NUM;
        }
    }

    printf("\n");

    return 0;
}