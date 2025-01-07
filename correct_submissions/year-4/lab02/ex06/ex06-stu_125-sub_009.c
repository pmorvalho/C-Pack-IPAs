
#include <stdio.h>

int main() {
    int n, i;
    float min, max, holder;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f", &holder);

        if (i == 0)
            max = min = holder;
        else if (holder > max)
            max = holder;
        else if (holder < min)
            min = holder;
    }

    printf("min: %f, max: %f\n", min, max);
    
    return 0;
}