

#include <stdio.h>

int main() {
    int N;
    float num, min, max;

    scanf("%d", &N);

    scanf("%f", &num);
    min = max = num;

    for(int i = 1; i < N; i++) {
        scanf("%f", &num);

        if (num > max)
            max = num;

        else if (num < min)
            min = num;
    }
    printf("min: %f, max: %f\n", min, max); 

    return 0;
}