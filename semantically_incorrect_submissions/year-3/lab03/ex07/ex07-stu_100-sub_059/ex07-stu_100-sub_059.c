

#include <stdio.h>

int main() {
    int c,n = 0, res = 0, op = '+';

    while ( (c = getchar()) != '\n') {
        if ('0' <= c && c <= '9')
        {
            n = n * 10 + c - '0';
        }
        if (c == '+' || c == '-')
            op = c;
        if (op == '+')
        {
            res += n;
            n = 0;
        }
        if (op == '-') {
            res -= n;
            n = 0;
        }
    }
    
    
    printf("%d\n", res);

    return 0;
}