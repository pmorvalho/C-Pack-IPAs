
#include <stdio.h>
int main(){
    int N;
    float min, max, i = 1, V;
    scanf("%d", &N);
    scanf("%f", &V);
    min = max = V;
    while(i < N){
        scanf("%f", &V);
        if (V < min){
            min = V;
        }
        if (V > max){
            max = V;
        }
        i++;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}