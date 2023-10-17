
#include<stdio.h>
int main () {
    int N, m = 1;
    float num, min, max;
    scanf("%d", &N);
    while (m <= N) {
        scanf("%f", &num);
        m++;
        if (m == 2){
            min = num;
            max = num;
        }
        else
            if (num < min)
                min = num;
            if (num > max)
                max = num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}