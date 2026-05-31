
#include <stdio.h>
int main(){
    int N;
    float min, max, num;
    scanf("%d", &N);
    scanf("%f", &min);
    max = min;
    while (N>1){
        scanf("%f", &num);
        if (num > max)
            max = num;
        else if (num < min)
            min = num;
        N--;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}