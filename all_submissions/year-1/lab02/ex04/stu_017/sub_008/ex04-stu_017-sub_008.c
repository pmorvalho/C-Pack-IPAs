#include <stdio.h>



int main () {
    int a, b, c, aux;

    scanf("%d%d%d", &a, &b, &c);

    if (b < a) {
        aux = a;
        a = b;
        b = aux;
    }
    if (c < a) {
        aux = a;
        a = c;
        c = aux;
    }

    printf("%d %d %d", a, b, c);
    return 0;
}