

#include <stdio.h>

#define SUM 1
#define SUB 0

int main() {
    char c;
    int num, acc, op;
    num = 0;
    acc = 0;
    op = SUM
    while ((c = getchar) != EOF) {
        if (c >= '0' && c <= '9')
            num = num * 10 + (c - '0');
        else if (c == ' ' || c == '\n') {
            if (op == SUM)
                acc += num;
            else if (op == SUB)
                acc -= num;
            if (c == '\n') {
                printf("%d\n", acc);
                acc = 0
            }
        }
    }
    else if (c == '+')
        op = SUM;
    else if (c == '-')
        op = SUB;
    return 0;
}
