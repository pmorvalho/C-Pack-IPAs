

#include <stdio.h>

int main() {

    int num, cont;
    float value, media, soma = 0;

    scanf("%d", &num);

    for (cont = 0; cont < num; cont++) {
        scanf("%f", &value);
        soma += value;
    }

    media = soma / num;
    printf("%.2f", media);

    return 0;
}