#include <stdio.h>



int main () {
    int a, b, c, aux;

    scanf("%d%d%d", &a, &b, &c);

    if ((b < a) and (b < c)) {
        aux = a;
        a = b;
        b = aux;
    }
    else if ((c < a) and (c < b)) {
        aux = a;
        a = c;
        c = aux;
    }
    
    if (c < b) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("%d %d %d", a, b, c);
    return 0;
}