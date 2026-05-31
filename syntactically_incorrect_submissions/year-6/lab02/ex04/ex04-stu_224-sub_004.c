
#include <stdio.h>

int main() {
    int a, b, c, menor, meio, maior;
    scanf("%d %d %d", &a, &b, &c);

    menor = a;
    maior = a;

    if (menor > b) {
        menor = b;
    } 
    if (menor > c) {
        menor = c;
    }
    if (b > maior) {
        maior = b;
    } 
    if (c > maior) {
        maior = c;
    }

    meio = a + b + c - maior - menor;
    printf("%d %d %d", menor, meio, maior);
}