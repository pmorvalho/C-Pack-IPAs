
#include <stdio.h>

int main() {
    int n, cont;
    cont = 0;
    float max, min, v;
    max = 0;
    min = 0;

    scanf("%d", &n);
    while (cont < n) {
        scanf("%f", &v);
        if (!(min)) {
            min = v;
            max = v;
        }
        if (min > v) {
            min = v;
        }
        else if (max < v) {
            max = v;
        }
        ++cont;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}