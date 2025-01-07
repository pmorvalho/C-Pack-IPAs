
#include <stdio.h>

#define DENTRO 1
#define FORA 0

int conta(int n1, int n2, char op);

int main()
{
    char c,  op = '+';
    int num = 0, prev = 0, estado = DENTRO, res = 0;
    

    while((c = getchar()) != '\n') {
        
        if (c == ' ') {
            estado = FORA;
            res += conta(prev, num, op);
            prev = num;
            num = 0;
            continue;
        }
        if (c == '+' || c == '-') {
            op = c;
            
        }
        

        if (estado == DENTRO) {
            num *= 10;
            num += c - '0';
        }
    }
    return printf("%d\n", res) == EOF;
}

int conta(int n1, int n2, char op)
{
    
    if (op == '+')
        return n1 + n2;
    else
        return n1 - n2;
}