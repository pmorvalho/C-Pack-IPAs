
#include <stdio.h>

int main() {
    int n, i;
    float min, max;
    scanf("%d", &n);
    float list[n];
    for (i = 0; i < n; i++) {
        scanf("%f", &list[i]);
    }
    min = list[0];
    max = list[0];
    for (i = 1; i < n; i++) {
        if (list[i] < min) {
            min = list[i];
        }
        if (list[i] > max) {
            max = list[i];
        }
    }
    printf("min: %f, max: %f\n", min, max);
    
    return 0;
}