
#include <stdio.h>

int main() {
    double n, max, min, input;
    min = 0;
    max = 0;

    scanf("%le", &n);

    for(int i = 0; i < n; i++) {
        scanf("%le", &input);
        if (input > max) {
            max = input;
        }
        if (input < min) {
            min = input;
        }
    }

    printf("min: %f, max: %f\n", min, max);

}