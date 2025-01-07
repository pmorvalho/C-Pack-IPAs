
#include <stdio.h>

int main() {
    int quantity, i;
    float max, min, num;

    printf("Introduza a quantidade de números: ");
    scanf("%d", &quantity);

    printf("Intoduza um número: ");
    scanf("%f", &max); 
    min = max;
    for (i = 1; i < quantity; i++) {
       printf("Intoduza um número: ");
        scanf("%f", &num); 
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}