

#include <stdio.h>

int build_num(int a, int b) {
    return a*10 + b;
}

enum operador{SUM, SUBTRACTION}; 

int main() {
    int c, n = 0, res = 0;
    enum operador op = SUM;
    while ((c = getchar()) != '\n' && c != EOF) {
        switch(op) {
            case SUM:
                if (c == ' ') {
                    res += n;
                    n = 0;
                }
                else if (c == '-')
                    op = SUBTRACTION;
                else if (c == '+')
                    op = SUM;
                else {
                    n = build_num(n, c - '0');
                }
                break;
            case SUBTRACTION:
                if (c == ' ') {
                    res -= n;
                    n = 0;
                }
                else if (c == '+')
                    op = SUM;
                else if (c == '-')
                    op = SUBTRACTION;
                else {
                    n = build_num(n, c -'0');
                }
        }
    }
    if (op == SUM)
        printf("%d\n", res + n);
    else
        printf("%d\n", res - n);
    return 0;
}