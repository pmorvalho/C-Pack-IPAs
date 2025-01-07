
#include <stdio.h>
#include <string.h>

int main() {


    char N[100];

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