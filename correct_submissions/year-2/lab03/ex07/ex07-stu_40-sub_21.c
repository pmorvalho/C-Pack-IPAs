#include <stdio.h>
#define SUM 1
#define SUB 0

int main() {
    int c, i, op, acc;
    i = 0;
    op = SUM;
    acc = 0;
    do {
        c = getchar();
        if(c >= '0' && c <= '9')
            i = (i*10) + (c - '0');
        
        else if(c==' ' || c == '\n') {
            if(op == SUM)
                acc += i;
            else if(op == SUB)
                acc -= i;
            i=0;
        }
        
        else if(c=='+')
            op= SUM;
        else if(c=='-')
            op= SUB;
    } while(c != '\n');
    printf("%d\n", acc);
    return 0;
}