
#include <stdio.h>

int main() {
    int n;
    float min, max, aux;
    scanf("%d", &n);

    
    scanf("%f", &aux);
    min = aux;
    max = aux;
    n--;

    while (n > 0) {
        scanf("%f", &aux);
        if (aux > max) {
            max = aux;
        } else if (aux < min) {
            min = aux;
        }
        n--;
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}
