

#include <stdio.h>

int main() {
    int num1, num2, num3, maior, menor, medio;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2) {
        if (num2 > num3) {
            maior = num1;
            medio = num2;
            menor = num3;
        }
        else if (num3 > num1) {
            maior = num3;
            medio = num1;
            menor = num2;
        }
        else {
            maior = num1;
            medio = num3;
            menor = num2;
        }
    }
    else if (num3 > num2) {
        maior = num3;
        medio = num2;
        menor = num1;
    }
    else if (num3 > num1) {
        maior = num2;
        medio = num3;
        menor = num1;
    }
    else {
        maior = num2;
        medio = num1;
        menor = num3;
    }
    printf("%d %d %d\n", menor, medio, maior);
    return 0; 
}