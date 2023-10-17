

#include <stdio.h>

int main() {
    int c;
    long int num = 0;
    int started = 0;
    
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            if (num == 0 && c == '0') {
                started = 1;
            } else {
                started = 1;
                num = num * 10 + (c - '0');
            }
        } else {
            if (started) {
                printf("%ld ", num);
                num = 0;
                started = 0;
            }
        }
    }
    
    if (started) {
        printf("%ld", num);
    }
    
    return 0;
}
