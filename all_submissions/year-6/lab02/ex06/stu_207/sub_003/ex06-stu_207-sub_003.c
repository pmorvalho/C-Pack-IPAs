
#include <stdio.h>
int main(){
    int N, i;
    scanf("%d", &N);
    float num[N];
    scanf("%f", &num[0]);
    float min = num[0], max = min;
    for (i = 1; i < N; i++){
        scanf("%f", &num[i]);
        if (num[i] > max)
            max = num[i];
        else if (num[i] < min)
            min = num[i];
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}