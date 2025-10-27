

#include <stdio.h>

int main(){
    float num, min=0, max=0;
    int N, contador=1;
    scanf("%d", &N);
    scanf("%f", &num);
    min=num;
    max=num;
    while (contador<N){
        contador ++;
        if (num>max){
            max=num;
        }
        if (num<min){
            min=num;
        }
        scanf("%f", &num);
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}