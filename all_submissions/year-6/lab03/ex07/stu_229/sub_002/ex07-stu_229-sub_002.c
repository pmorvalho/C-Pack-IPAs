
#include <stdio.h>

int main(){
    int c, m = 0, num = 0, op = '+';
    while((c = getchar()) != EOF && c != '\n'){
        if (c >= '0' && c <= '9')
            num = num * 10 + (c - '0');
        else if (c == '+' || c == '-'){
            if (op == '+') m += num;
            else if(op == '-') m -= num;
            num = 0;
            op = c;
        }
    }
    if (op == '+') m += num;
    else if(op == '-') m -= num;
    printf("%d\n", m);
    return 0;
}