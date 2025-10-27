
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maior, menor, medio;

    if (a > b && a > c) {
        maior = a;
        if (b > c) {
            medio = b;
            menor = c;
        } else {
            medio = c;
            menor = b;
        }
    } else if (b > a && b > c) {
        maior = b;
        if (a > c) {
            medio = a;
            menor = c;
        } else {
            medio = c;
            menor = a;
        }
    } else {
        maior = c;
        if (a > b) {
            medio = a;
            menor = b;
        } else {
            medio = b;
            menor = a;
        }
    }

    
    printf("%d %d %d\n", menor, medio, maior);
    
    return 0;
}
