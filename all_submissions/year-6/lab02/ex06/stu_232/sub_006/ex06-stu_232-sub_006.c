

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    float num;
    scanf("%f", &num);
    float min = num;
    float max = num;
    for (int i = 1; i<N; i++){
        scanf("%f", &num);
        if (num > max){
            max = num;
        }
        if (num < min){
            min = num;
        }
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}