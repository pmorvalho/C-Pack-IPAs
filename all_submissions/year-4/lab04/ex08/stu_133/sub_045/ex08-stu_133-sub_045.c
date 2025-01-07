
#include <stdio.h>
#include <string.h>

#define DIM 100
#define DENTRO 1
#define FORA 0

void comparaNumeros(char n1[], char n2[]);

int main() {
    char n1[DIM], n2[DIM];

    scanf("%s %s", n1, n2);
    comparaNumeros(n1, n2);
    return 0;
}

void comparaNumeros(char n1[], char n2[]) {
    int i = 0;

    for (i = 0; n1[i] != '\0'; i++) {
        if (n1[i] > n2[i]) {
            printf("%s\n", n1);
            return;
        } else if (n1[i] < n2[i]) {
            printf("%s\n", n2);
            return;
        } 
    }
    printf("%s\n", n1);    
}