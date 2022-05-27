#include <stdio.h>

int main() {
    int a, b, c;
    printf("Introduza 3 numeros inteiros: \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a <= b) {
        if (b <= c) {
            printf("%d", c);
        }
        else{
            printf("%d", b);
        }
    } 
    else {
        if (a <= c) {
            printf("%d", c);
        }
        else {
            printf("%d", a);
        }
    }

    return 0;
}