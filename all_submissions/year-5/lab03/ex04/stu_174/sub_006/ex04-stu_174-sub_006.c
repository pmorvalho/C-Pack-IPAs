
#include <stdio.h>

int main() {
    char c;
    int zero = 0;
    while((c = getchar()) != EOF){
        switch (c) {
            case ' ':
            case '\n':
                if(zero) {
                    zero = 0;
                } else {
                    putchar('0');
                }
                putchar(c);
                break;
            case '0':
                if(zero) putchar(c);
                break;
            default:
                zero = 1;
                putchar(c);
        }
    }
    printf("\n");
    return 0;
}