
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    int c, num = 0, res = 0;
    char op = '+'; 
    
    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }
        else if(c == '+' || c == '-' || c == ' ' || c == '\n') {
            if(op == '+') {
                res += num;
            } else if(op == '-') {
                res -= num;
            }
            
            num = 0;
            
            if(c == '+' || c == '-') {
                op = c;
            }
            
            if(c == '\n') {
                printf("%d\n", res);
                return 0;
            }
        }
    }
    return 0;
}
