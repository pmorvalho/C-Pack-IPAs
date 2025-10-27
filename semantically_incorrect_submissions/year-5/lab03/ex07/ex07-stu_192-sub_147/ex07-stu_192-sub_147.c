
#include <stdio.h>

int main() {
    int n, num = '0', resultado = '0';
    n = getchar();
    while(n != '\n') {
        while(n != ' ') {
            num = num * 10 + n;
            n = getchar();
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
        num = 0;
    }
    putchar(resultado);
    putchar('\n');
    return 0;
}