

#include <stdio.h>

int main(){
    int N, cont = 1;
    float num, min, max;

    scanf("%d%f", &N, &num);
    min = num;
    max = num;
    while (cont < N){
        scanf("%f", &num);
        if (num < min){
            min = num;
        }
        else if (num > max){
            max = num;
        }
        cont++;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}

