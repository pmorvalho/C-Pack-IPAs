

#include <stdio.h>

int main() {
    int n1, n2, n3;
    int maior, mediano, menor;
    
    scanf("%d%d%d", &n1, &n2, &n3);
    
    
    if (n1 >= n2) {
        maior = n1;
        menor = n2;
    }
    else {
        maior = n2;
        menor = n1;
    }

    
    if (n3 > maior) {
        mediano = maior;
        maior = n3;
    } else if (n3 < menor) {
        mediano = menor;
        menor = n3;
    } else
        mediano = n3;

    printf("%d %d %d\n", menor, mediano, maior);
    return 0;
}