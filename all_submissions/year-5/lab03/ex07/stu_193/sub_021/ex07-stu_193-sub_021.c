

#include <stdio.h>


int main() {
    int c,res = 0;
    int num = 0;
    char op;

    while((c = getchar()) != EOF && (c >= '0' && c <= '9')) 
        res = res * 10 + (c - '0');

    while (c != '\n' && c != EOF) {
        while ((c = getchar()) != EOF) {
            if( c == '+' || c == '-') {
                op = c;
                break;
            }
        }
        num = 0;
        while((c = getchar()) != EOF) {
            if (c >= '0' && c <= '9') {
                num = num * 10 + (c - '0');
                break;
            }
        }
        
        if (op == '+')
            res = res + num;
        if (op == '-')
            res = res - num;
        c = getchar();
        if (c == '\n') break;
    }
    printf("%d\n",res);

    return 0;
}






















// }