

#include <stdio.h>

int main () {

    int num_v, counter = 1;
    float val, soma = 0 , media;

    scanf("%d", &num_v);
    
    while (counter <= num_v) {
        scanf("%f", &val);
        soma += val;
        counter++;
    }

    media = soma / num_v;
    printf("%.2f\n", media);
    return 0;
}