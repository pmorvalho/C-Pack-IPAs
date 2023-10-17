

#include <stdio.h>

int main(){

    int N, contador;
    float num, min, max;
    contador = 0;

    scanf("%d", &N);
    scanf("%f", &num);

    min= num;
    max= num;

    while (contador++, contador < N){
        scanf("%f", &num);

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }
printf("min: %f, max: %f\n", min, max);
return 0;
}