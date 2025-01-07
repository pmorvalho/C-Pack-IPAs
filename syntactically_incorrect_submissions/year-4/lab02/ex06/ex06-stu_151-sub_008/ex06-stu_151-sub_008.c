#include <stdio.h>

int main() {
    float num, max, min;
    int N;
    
    scanf("%d", &N);

    scanf("%f", &num);
    min = num;
    max = num;

    for (int i = 2; i <= N; i++) {
        scanf("%f", &num);
        
        if (num > max) {
            max = num;
        }
        else if (num < min) {
            min = num;
        }
    }    
    
    printf("min: %f, max: %f\n", min, max);
    
    return 0;
}

