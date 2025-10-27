
#include <stdio.h>

int main() {
    char n;
    n = getchar();
    while(n != EOF) {
        if(n != '0') {
            putchar(n);
            n = getchar();
        }
    }

    return 0;
}