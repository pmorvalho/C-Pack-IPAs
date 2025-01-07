

#include <stdio.h>

int main() {

    int n;
    float a;
    float maior, menor;

    scanf("%d",&n);

    scanf("%f",&a);
    n--;

    maior = a;
    menor = a;

    while (n > 0) {
        scanf("%f",&a);

        if (a > maior)
            maior = a;
        if (a < menor)
            menor = a;

        n--;
    }

    printf("min: %f, max: %f\n", menor, maior);

    return 0;
}