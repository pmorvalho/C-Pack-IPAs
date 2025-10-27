
#include <stdio.h>

int main() {
    char n;
    int m, num = 0, resultado = 0;
    n = getchar();
    m = n - '0';
    while(n != '\n') {
        while(n != ' ') {
            num = num * 10 + m;
            n = getchar();
            if(n != ' ')
                m = n - '0';
        }
        n = getchar();
        if(n == '+') {
            resultado = resultado + num;
        } else {
            resultado = resultado - num;
        }
        n = getchar();
        if (n != '\n') {
            n = getchar();
            m = n - '0';
        }
        num = 0;
    }
    printf("%d\n", resultado);
    return 0;
}