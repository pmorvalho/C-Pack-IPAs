
#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, op = '+', state = 0, n = 0, res = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            continue; 
        
        if (c == '+' || c == '-') {
            if (state == 1) { 
                if (op == '+')
                    res += n;
                else if (op == '-')
                    res -= n;
                n = 0;
            }
            op = c;
            state = 0;
        }
        else if (c >= '0' && c <= '9') {
            n = n * 10 + (c - '0'); 
            state = 1;
        }
    }

    
    if (state == 1) {
        if (op == '+')
            res += n;
        else if (op == '-')
            res -= n;
    }

    printf("Result: %d\n", res);
    return 0;
}