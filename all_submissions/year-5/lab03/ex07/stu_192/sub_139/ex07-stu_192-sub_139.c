
#include <stdio.h>

int main() {
    char n;
    int m, num = 0, resultado = 0;
    scanf("%c", &n);
    m = n - '0';
    while(n != '\n') {
        while(n != ' ') {
            num = num * 10 + m;
            scanf("%c", &n);
            if(n != ' ')
                m = n - '0';
        }
        scanf("%c", &n);
        if(n == '+') {
            resultado = resultado + num;
        } else {
            resultado = resultado - num;
        }
        scanf("%c", &n);
        if (n != '\n') {
            scanf("%c", &n);
            m = n - '0';
        }
        num = 0;
    }
    printf("%d\n", resultado);
    return 0;
}