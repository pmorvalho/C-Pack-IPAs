
#include <stdio.h>

int main () {
    int a, b, c, sup, inf, soma, inter;

    scanf("%d %d %d", &a, &b, &c);
    soma = a + b + c;
    sup = a;
    inf = a; 
    if (b>a)
        sup = b;
        else {
            inf = b;
        }
    if (c>sup)
        sup = c;
    if ( c< inf)
        inf = c;
    inter = soma - (sup + inf);
    printf("%d %d %d", inf, inter, sup);
    return 0;
}