
#include <stdio.h>

int main() {
    char n;
    n = getchar();
    while(n != EOF) {
        if(n == '\"') {
            n = getchar();
            while(n != '\"') {
                putchar(n);
                n = getchar();
            }
            if(n == '\"') {
                printf("\n");
            }
        }
        n = getchar();
    }
    return 0;
}