
#include <stdio.h>

#define INCREMENTO 10

int main() {
    int n, num = 0, resultado = 0;
    n = getchar();
    while(n != '\n') {
        while(n != ' ') {
            num = num*INCREMENTO + n;
            n = getchar();
            putchar(num);
        }
        n = getchar();
        if(n == '+') {
            resultado = resultado + num;
        } else {
            resultado = resultado - num;
        }
        n = getchar();
        n = getchar();
        num = 0;
    }
    printf("%d\n", resultado);
    return 0;
}