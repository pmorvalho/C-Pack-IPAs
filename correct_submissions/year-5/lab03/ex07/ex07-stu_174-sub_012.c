
#include <stdio.h>
#include <stdlib.h>

enum op{SUM,SUB};

int operation(enum op op, int left, int right) {
    if(op == SUM) return left + right;
    return left - right;
}


int conc_num(int left, int right) {
    return 10*left + right;
}

int main() {
    enum op opera = SUM;
    int c, total = 0, number = 0;
    while((c = getchar()) != '\n'){
        switch (c) {
            case ' ':
                break;
            case '+':
                total = operation(opera, total, number);
                number = 0;
                opera = SUM;
                break;
            case '-':
                total = operation(opera, total, number);
                number = 0;
                opera = SUB;
                break;
            default:
                number = 10 * number + (c-'0');
        }
    }
    printf("%d\n", operation(opera, total, number));
    return 0;
}