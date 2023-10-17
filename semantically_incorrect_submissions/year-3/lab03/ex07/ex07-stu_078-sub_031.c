

#include <stdio.h>

int digit(int c) {
    return '0' <= c && c <= '9';
}

int main() {
    int c, sum = 0;

    while ((c = getchar()) != '\n') {
        if (digit(c)) 
            sum += (c - '0');
        else if (c == ' ') {
            c = getchar();
            if (c == '+') {
                c = getchar();
                c = getchar();
                sum += (c - '0');
            }
            else if (c == '-') {
                c = getchar();
                c = getchar();
                sum -= (c - '0');
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}