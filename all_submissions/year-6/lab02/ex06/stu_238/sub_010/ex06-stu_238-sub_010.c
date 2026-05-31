
#include <stdio.h>

int main() {
    int i, N;
    float min, max, tmp;

    
    if (scanf("%d", &N) == 1 && N > 0) {
        
        
        scanf("%f", &tmp);
        min = max = tmp;

        
        for (i = 2; i <= N; i++) {
            if (scanf("%f", &tmp) == 1) {
                if (tmp < min) min = tmp;
                if (tmp > max) max = tmp;
            }
        }

        
        printf("min: %f, max: %f\n", min, max);
    }

    return 0;
}