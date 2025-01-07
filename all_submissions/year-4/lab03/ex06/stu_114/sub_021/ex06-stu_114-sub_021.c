
#include <stdio.h>
#include <string.h>
#define VECMAX 100

int main() {


    char N[VECMAX];

    scanf("%s", N);
    int Tam = strlen(N);
    int Inteiro = 0;
    int i = 0;

    while (i < Tam) {
        Inteiro += N[i] - '0';
        i++; 
    }
    if (Inteiro % 9 == 0) {
        printf("yes\n");
    }

    else {
        printf("no\n");
    }
    return 0;
}