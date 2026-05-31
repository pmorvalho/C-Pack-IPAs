

#include <stdio.h>

int main(){

    int N;

    float curr, min, max;

    scanf("%d", &N);

    scanf("%f", &curr);

    min = curr;
    max = curr;

    for (int i = 1; i < N; i++){
        scanf("%f", &curr);

        if (curr < min){
            min = curr;
        }
        else if (curr > max){
            max = curr;
        }
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}