#include <stdio.h>

int main() {
    float n, max, min;
    char ch;

    scanf("%f", &n);
    min = n;
    max = n;

    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            scanf("%f", &n);
            if (n < min) min = n;
            if (n > max) max = n;
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}
