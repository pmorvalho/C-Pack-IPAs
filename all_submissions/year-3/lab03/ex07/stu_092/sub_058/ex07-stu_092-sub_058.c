
#include <stdio.h>

int main() {
    int num = 0, result = 0, c;
    char op = '+';

    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') 
            num = num * 10 + (c - '0');  
        else if (c == '+' || c == '-') {
            if (op == '+') 
                result += num;
            else 
                result -= num;
            op = c;
            num = 0;
        }
    }
    if (op == '+') 
        result += num;
    else 
        result -= num;
    printf("%d\n", result);
    return 0;
}