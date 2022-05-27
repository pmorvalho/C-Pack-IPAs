#include <stdio.h>



int main() {

    int i,N;
    float r, min, max;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%f", &r);
        if (i == 0) {
        min = max = r;
        }
        if ( r < min) {
        min =r;
        }
        if (r > max) {
        max = r;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}
    
