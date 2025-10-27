
#include <stdio.h>

int main(){
    float N, num, max = 0.0, min = 0.0;
    scanf("%f", &N);
    for (int i = 0; i < N; i++){
        scanf("%f", &num);
        max = max < num ? num : max;
        if (i == 0)
            min = num;
        else
            min = min > num ? num : min;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}