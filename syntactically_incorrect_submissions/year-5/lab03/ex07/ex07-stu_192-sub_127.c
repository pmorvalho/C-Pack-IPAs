
#include <stdio.h>

int main() {
    int n, num = '0', resultado = '0';
    n = getchar();
    n = n - '0';
    while(n != '\n') {
        while(n != ' ') {
            num = num * 10 + n;
            n = getchar();
            if(n != ' ')
                n = n - '0';
        }
        n = getchar();
        if(n == '+') {
            resultado = resultado + num;
        } else {
            resultado = resultado - num;
        }
        n = getchar();
        if (n != '\n')
            n = getchar();
            n = n - '0';
        num = '0';
    }
    putchar(resultado);
    putchar('\n');
    return 0;
}