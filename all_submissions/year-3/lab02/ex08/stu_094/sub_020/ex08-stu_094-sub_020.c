

#include <stdio.h>

int main () {

    int num_v, counter;
    float val, soma = 0, media;

    scanf("%d", &num_v);
    
    scanf("%F", &val);
    for (counter = 1; counter < num_v; counter++) {
        scanf("%f", &val);
        soma += val;
    }

    media = soma / num_v;
    printf("%.2f", media);
    return 0;
}