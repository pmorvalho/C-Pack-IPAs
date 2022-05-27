#include <stdio.h>



int main () {
    int a;
    int b;
    int c;

    printf ("Introduza três numeros:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf(" O numero maior é %d\n", a);
        }
        else {
            printf( " O maior numero é %d\n", c);
        }}
    else {
        if (b > c) {
            printf(" O maior numero é %d\n", b);
        }
        else {
            printf("O maior numero é %d\n", c);
        }
    }
    return 0;

}