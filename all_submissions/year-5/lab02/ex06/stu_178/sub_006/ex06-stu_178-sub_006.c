
#include <stdio.h>

int main(){
    int N, cont;
    float Num, Min, Max;
    scanf("%d", &N);
    scanf("%f", &Num);
    Min = Num;
    Max = Num;
    for (cont = 2; cont <=N; cont++){
        scanf("%f", &Num);
        if (Num <= Min){
            Min = Num;
        }
        if (Num >= Max){
            Max = Num;
        }
    }
    printf("min: %f, max: %f\n", Min, Max);
    return 0;
}