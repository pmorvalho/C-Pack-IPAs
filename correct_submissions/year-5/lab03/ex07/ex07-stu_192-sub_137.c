
#include <stdio.h>

int main() {
    char n = ' ';
    int num = 0, resultado = 0, m = 1;
    scanf("%d", &num);
    while(n != '\n') {
        scanf("%c", &n);
        scanf("%c", &n);
        if(m == 1) {
            resultado = resultado + num;
        } else {
            resultado = resultado - num;
        }
        if(n == '+') {
            m = 1;
        } else {
            m = 0;
        }
        scanf("%c", &n);
        if (n != '\n') {
            scanf("%d", &num);
        }
    }
    printf("%d\n", resultado);
    return 0;
}
