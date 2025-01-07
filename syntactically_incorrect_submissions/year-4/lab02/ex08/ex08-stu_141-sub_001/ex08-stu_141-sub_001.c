
#include <stdio.h>

int main(){
    int N;
    float temp, sum = 0, average;

    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%f", &temp);
        sum += temp;
    }
    average = sum / N;

    printf("%.2f\n", average);
    return 0;
}