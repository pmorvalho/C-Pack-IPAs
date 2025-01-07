
#include <stdio.h>

int main(){
    int N;
    float min, max, temp;

    scanf("%d %f", &N, &min);
    max = min;

    for (int i = 1; i < N; i++){
        scanf("%f", &temp);
        max = (max > temp) ? max : temp;
        min = (min < temp) ? min : temp;         
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}